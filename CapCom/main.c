#include "../inc/swilib.h"
#include "../inc/i2c.h"
#include "../inc/clkman.h"
#include "../inc/interrupt.h"

#ifdef NEWSGOLD
#include "../inc/reg8876.h"
#else
#include "../inc/reg8875.h"
#endif

void int_ccu1_t0_handler(int irq);

typedef struct{
  char state; //3
  char prio; //max priority==15
  char unk2;
  char unk3;  
  void (*handler)(int vector);
} IRQ_DESC;


IRQ_DESC ccu1_t0=
{
  3,
  0xA,
  0,
  0,
  int_ccu1_t0_handler,
};


#ifdef  CX75
#define Register_IRQ ((void(*)(char irq_vector, IRQ_DESC* new, IRQ_DESC *old )) 0xA0ACA5F8)
#endif

int Prescaler = 1; 
int Frequency = 1000;
int Dutycycle = 50; 


char dat_40 = 0x26;
char dat_42 = 0x04;

#ifdef SGOLD
#define PM_RINGIN   GPIO.CC_VZ
#endif
#ifdef NEWSGOLD
#define PM_RINGIN   GPIO.RF_STR1
#endif

extern void kill_data(void *p, void (*func_p)(void *));
void ElfKiller(void)
{
  extern void *ELF_BEGIN;
  kill_data(&ELF_BEGIN,(void (*)(void *))mfree_adr());
}

void pwm_test_sound()
{
  int count;

   PM_RINGIN = 0x30; 
   int saved = disable_interrupts();
   count = divide(Frequency << 10, capcom_hw_clk) << 10; // �������� ���������� ���� �� ��������.������� �� ������ ���� ������ 26kHz
   CCU1.CLC = 0x100;
   CCU1.T0REL = 65536 - count;
   CCU1.T0 = 65536 - count; 
   CCU1.CC5 = 65536 - divide(1000, Dutycycle * count * 10);
   
   CCU1.CCSEM &= ~ CCSEM5;  //��������� ����� ������ �������
   CCU1.CCSEE &= ~ CCSEE5;     
   CCU1.CCM1  |=  CCM1_MOD5 & (MODE_COMPARE_3 << 4); /* ����� ��������� 3: ��� ���������� ��������������� ���� ����������  � ������������� �������� ������� CCxIO ����� ���������� � 1.��� ������������ ������� �������� ������� ������������. */
   CCU1.CCM1  &= ~ CCM1_ACC5;    /* ��������  ���,������� �������/��������� CC5 ����� �������� � ������� T0 */

   CCU1.CCIOC &= ~ PL;
   CCU1.CCIOC |= STAG;      /* ���� �� ���������� ���� ���,�������� ����������� ���������� � 8 ��� */
   CCU1.CCIOC &= ~ PDS;


   CCU1.T0IC  &= ~ ICR_IEN;  /* ��������� ���������� ��� ������������ ������� T0 */
   CCU1.CC5IC &= ~ ICR_IEN;  /* ��������� ���������� ��� ���������� �������� �������� CC5 �� ��������� �������*/
   
   CCU1.T01CON  &= ~ T0I;  /* ����������� 1, ������� ������� ��� ������� 26 ��� */
   CCU1.T01CON  &= ~ T0M;  /* �������� ���,����� ������� */
   CCU1.T01CON |= T0R;    /* ��������� ����� ���� ��������� ������ */
   enable_interrupts(saved);

   i2cw_pmu(0x42, &dat_42, 0, 0); //������������� PM_RINGIN ���������� �������� ������� �� Dialog
   i2cw_pmu(0x40, &dat_40, 0, 0); //���������
} 

void test_pin()
{
  int count;
  
   GPIO.DSPOUT0 = 0x30; // pin 6
   int saved = disable_interrupts();   
   count = divide(Frequency << 10, capcom_hw_clk) << 10; // �������� ���������� ���� �� ��������.���� �����������-������� �� ������ ���� ������ 26kHz
   CCU1.CLC = 0x100;  
   CCU1.T0REL = 65536 - count;
   CCU1.T0 = 65536 - count; 
   CCU1.CC6 = 65536 - divide(1000, Dutycycle * count * 10);
   
   CCU1.CCSEM &= ~ CCSEM6;    //��������� ����� ������ �������
   CCU1.CCSEE &= ~ CCSEE6;     
   CCU1.CCM1  |=  CCM1_MOD6 & (MODE_COMPARE_3 << 8); /* ����� ��������� 3: �������� ������� ��������������� �� ������ ����������.��� ������������ ������� �������� ������� ������������.������ ���� ���������� �� ������ ������� */
   CCU1.CCM1  &= ~ CCM1_ACC6;  /* ��������  ���,������� �������/��������� CC6 ����� �������� � ������� T0 */
   
   CCU1.CCIOC &= ~ PL;
   CCU1.CCIOC |= STAG;      /* ���� �� ���������� ���� ���,�������� ����������� ���������� � 8 ��� */
   CCU1.CCIOC &= ~ PDS;
           
   CCU1.T0IC  &= ~ ICR_IEN;   /* ��������� ���������� ��� ������������ ������� T0 */ 
   CCU1.CC6IC &= ~ ICR_IEN;    /* ��������� ���������� ��� ���������� */
   
   CCU1.T01CON  &= ~ T0I;  /* ����������� 1, ������� ������� ��� ������� 26 ��� */
   CCU1.T01CON  &= ~ T0M;  /* ����� ������� */
   CCU1.T01CON  |= T0R;    /* c���� ������� */ 
   enable_interrupts(saved);
}


void test_100kHz()
{
   GPIO.DSPOUT0 = GPIO_PPEN | 0x30; // �������� ���������, ���������� � CAPCOM
   int saved = disable_interrupts();   
//CCU1.T0 = 0x10000 - (Period(ns) / 39.0625)
   CCU1.CLC = 0x100;
   CCU1.T0REL = 0xFF00;  //���������� ������� ��� �������� ������� 1(26 Mhz) ����� 39.0625 ns, P = 39.0625  * 256 = 1/100000
   CCU1.T0 = 0xFF00; 
   CCU1.CC6 = 0xFF80;
   
   CCU1.CCSEM &= ~ CCSEM6;    //��������� ����� ������ �������
   CCU1.CCSEE &= ~ CCSEE6;     
   CCU1.CCM1  |=  CCM1_MOD6 & (MODE_COMPARE_3 << 8); /* ����� ��������� 3: �������� ������� ��������������� �� ������ ����������.��� ������������ ������� �������� ������� ������������.������ ���� ���������� �� ������ ������� */
   CCU1.CCM1  &= ~ CCM1_ACC6;  /* �������� ���,������� �������/��������� CC6 ����� �������� � ������� T0 */
   
   CCU1.CCIOC &= ~ PL;
   CCU1.CCIOC |= STAG;      /* ���� �� ���������� ���� ���,�������� ����������� ���������� � 8 ��� */
   CCU1.CCIOC &= ~ PDS;
           
   CCU1.T0IC  &= ~ ICR_IEN;  /* ��������� ���������� ��� ������������ ������� T0 */ 
   CCU1.CC6IC &= ~ ICR_IEN;  /* ��������� ���������� ��� ���������� �������� �������� CC6 �� ��������� ������� T0*/
   
   CCU1.T01CON  &= ~ T0I;  /* ����������� 1, ������� ������� ��� ������� 26 ��� */
   CCU1.T01CON  &= ~ T0M;  /* ����� ������� */
   CCU1.T01CON  |= T0R;    /* c���� ������� */ 
   enable_interrupts(saved);
}

void test_1Gz()
{ 
   GPIO.DSPOUT0 = 0x30; // pin 6
   int input_clk = divide(Prescaler, capcom_hw_clk );  

   CCU0.CLC = 0x100;
   CCU0.T0 =  0x3C00;
   CCU0.T0REL = 0x3C00;
   CCU0.CC2 = 0x9E00;
   
   CCU0.CCSEM &= ~ CCSEM2;    //��������� ����� ������ �������
   CCU0.CCSEE &= ~ CCSEE2;     
   CCU0.CCM0  |=   CCM0_MOD2 & (MODE_COMPARE_3 << 8); ; /* ����� ��������� 3: �������� ������� ��������������� �� ������ ����������.��� ������������ ������� �������� ������� ������������.������ ���� ���������� �� ������ ������� */
   CCU0.CCM0  &= ~ CCM0_ACC2;  /* ��������  ���,������� �������/��������� CC2 ����� �������� � ������� T0 */
   
   CCU0.CCIOC |= STAG;    /* ���� �� ���������� ���� ���,�������� ����������� ���������� � 8 ���.���������.. */
           
   CCU0.T0IC  &= ~ ICR_IEN;  /* ��������� ���������� ��� ������������ ������� T0 */ 
   CCU0.CC2IC &= ~ ICR_IEN;  /* ��������� ���������� ��� ���������� */
   
   CCU0.T01CON  |= 6;  /* ����������� 1, ������� ������� ��� ������� 26 ��� */
   CCU0.T01CON  &= ~ T0M;  /* ����� ������� */
   CCU0.T01CON  |= T0R;   /* c���� ������� */  
}


void test_pin_cts()//sgold
{
   GPIO.USART0_CTS = GPIO_PPEN | 0x30; // �������� ���������(open drain), ���������� � CAPCOM 
   //CCU1.T0 = 0x10000 - (Period(ns) / 39.0625)
   CCU1.CLC = 0x100;
   CCU1.T0REL = 0xFF00;  //���������� ������� ��� �������� ������� 1(26 Mhz) ����� 39.0625 ns, P = 39.0625  * 256 = 1/100000
   CCU1.T0 = 0xFF00; 
   CCU1.CC2 = 0xFF80;
   
   CCU1.CCSEM &= ~ CCSEM2;    //��������� ����� ������ �������
   CCU1.CCSEE &= ~ CCSEE2;     
   CCU1.CCM0 |=  CCM0_MOD2 & (MODE_COMPARE_3 << 8); /* ����� ��������� 3: �������� ������� ��������������� �� ������ ����������.��� ������������ ������� �������� ������� ������������.������ ���� ���������� �� ������ ������� */
   CCU1.CCM0 &= ~ CCM0_ACC2;  /* �������� ���,������� �������/��������� CC6 ����� �������� � ������� T0 */
   
   CCU1.CCIOC &= ~ PL;
   CCU1.CCIOC |= STAG;      /* ���� �� ���������� ���� ���,�������� ����������� ���������� � 8 ��� */
   CCU1.CCIOC &= ~ PDS;
           
   CCU1.T0IC  &= ~ ICR_IEN;  /* ��������� ���������� ��� ������������ ������� T0 */ 
   CCU1.CC2IC &= ~ ICR_IEN;  /* ��������� ���������� ��� ���������� �������� �������� CC2 �� ��������� ������� T0*/
   
   CCU1.T01CON &= ~ T0I;  /* ����������� 1, ������� ������� ��� ������� 26 ��� */
   CCU1.T01CON &= ~ T0M;  /* ����� ������� */
   CCU1.T01CON |= T0R;    /* c���� ������� */
}

void test_pin_tx()
{
   GPIO.USART0_TXD = GPIO_PPEN | 0x30; // �������� ���������(open drain), ���������� � CAPCOM 
   //CCU1.T0 = 0x10000 - (Period(ns) / 39.0625)
   CCU0.CLC = 0x100;
   CCU0.T0REL = 0xFF00;  //���������� ������� ��� �������� ������� 1(26 Mhz) ����� 39.0625 ns, P = 39.0625  * 256 = 1/100000
   CCU0.T0 = 0xFF00; 
   CCU0.CC2 = 0xFF80;
   
   CCU0.CCSEM &= ~ CCSEM2;    //��������� ����� ������ �������
   CCU0.CCSEE &= ~ CCSEE2;     
   CCU0.CCM0 |=  CCM0_MOD2 & (MODE_COMPARE_3 << 8); /* ����� ��������� 3: �������� ������� ��������������� �� ������ ����������.��� ������������ ������� �������� ������� ������������.������ ���� ���������� �� ������ ������� */
   CCU0.CCM0 &= ~ CCM0_ACC2;  /* �������� ���,������� �������/��������� CC2 ����� �������� � ������� T0 */
   
   CCU0.CCIOC &= ~ PL;
   CCU0.CCIOC |= STAG;      /* ���� �� ���������� ���� ���,�������� ����������� ���������� � 8 ��� */
   CCU0.CCIOC &= ~ PDS;
           
   CCU0.T0IC  &= ~ ICR_IEN;  /* ��������� ���������� ��� ������������ ������� T0 */ 
   CCU0.CC2IC &= ~ ICR_IEN;  /* ��������� ���������� ��� ���������� �������� �������� CC2 �� ��������� ������� T0*/
   
   CCU0.T01CON &= ~ T0I;  /* ����������� 1, ������� ������� ��� ������� 26 ��� */
   CCU0.T01CON &= ~ T0M;  /* ����� ������� */
   CCU0.T01CON |= T0R;    /* c���� ������� */
}

int main(void)
{   
   ShowMSG(1,(int)"ELF Started!" );
   ClkStateOn(CAPCOM_MASK);
   test_pin_tx();

   SUBPROC((void *)ElfKiller);
   return 0;
}

