#include "..inc/swilib.h"
#include "..inc/reg8876.h"
#include "..inc/i2c.h"
#include "..inc/clkman.h"
#include "..inc/interrupt.h"

int Prescaler = 1;
int Frequency = 1000;
int Dutycycle = 50; 

I2C_RAM msg_40, msg_42;
char dat_40 = 0x26;
char dat_42 = 0x04;

#define _BV(bit) (1 << (bit))

#ifdef SGOLD
#define PM_RINGIN   GPIO_CC_VZ
#endif
#ifdef NEWSGOLD
#define PM_RINGIN   GPIO_RF_STR1
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

   PM_RINGIN = (ALT2 << OS); 
   int saved = disable_interrupts();
   count = divide(Frequency << 10, hw_clk) << 10; // �������� ���������� ���� �� ��������.���� �����������-������� �� ������ ���� ������ 26kHz
   CCU1->CLK = 0x100;
   CCU1->T0REL = 65536 - count;
   CCU1->T0 = 65536 - count; 
   CCU1->CC5 = 65536 - divide(1000, Dutycycle * count * 10);
   
   CCU1->CCSEM &= ~ _BV(CCSEM5);    //��������� ����� ������ �������
   CCU1->CCSEE &= ~ _BV(CCSEE5);     
   CCU1->CCM1  |=  (MODE_7 << CCM1_MOD5); /* ����� ��������� 3: ��� ���������� ��������������� ���� ����������  � ������������� �������� ������� CCxIO ����� ���������� � 1.��� ������������ ������� �������� ������� ������������. */
   CCU1->CCM1  &= ~ _BV(CCM1_ACC5);    /* ��������  ���,������� �������/��������� CC5 ����� �������� � ������� T0 */

   CCU1->CCIOC &= ~ _BV(PL);
   CCU1->CCIOC |= _BV(STAG);      /* ���� �� ���������� ���� ���,�������� ����������� ���������� � 8 ��� */
   CCU1->CCIOC &= ~ _BV(PDS);


   CCU1->T0IC  &= ~ SFR_ICEN;  /* ��������� ���������� ��� ������������ ������� T0 */
   CCU1->CC5IC &= ~ SFR_ICEN;  /* ��������� ���������� ��� ���������� �������� �������� CC5 �� ��������� �������*/
   
   CCU1->T01CON  &= ~ _BV(T0I);  /* ����������� 1, ������� ������� ��� ������� 26 ��� */
   CCU1->T01CON  &= ~ _BV(T0M);  /* �������� ���-����� ������� */
   CCU1->T01CON  |= _BV(T0R);    /* ��������� ����� ���� ��������� ������ */
   enable_interrupts(saved);

   i2cw_pmu(&msg_42, 0x42, 4, 0); //������������� PM_RINGIN ���������� �������� ������� �� Dialog
   i2cw_pmu(&msg_40, 0x40, 0x26, 0); //���������
}

void test_pin()
{
  int count;
  
   GPIO_DSPOUT0 = (ALT2 << OS); // pin 6
   int saved = disable_interrupts();   
   count = divide(Frequency << 10, hw_clk) << 10; // �������� ���������� ���� �� ��������.���� �����������-������� �� ������ ���� ������ 26kHz
   CCU1->CLK = 0x100;  
   CCU1->T0REL = 65536 - count;
   CCU1->T0 = 65536 - count; 
   CCU1->CC6 = 65536 - divide(1000, Dutycycle * count * 10);
   
   CCU1->CCSEM &= ~ _BV(CCSEM6);    //��������� ����� ������ �������
   CCU1->CCSEE &= ~ _BV(CCSEE6);     
   CCU1->CCM1  |=   (MODE_5 << CCM1_MOD6) ; /* ����� ��������� 3: �������� ������� ��������������� �� ������ ����������.��� ������������ ������� �������� ������� ������������.������ ���� ���������� �� ������ ������� */
   CCU1->CCM1  &= ~ _BV(CCM1_ACC6);  /* ��������  ���,������� �������/��������� CC6 ����� �������� � ������� T0 */
   
   CCU1->CCIOC &= ~ _BV(PL);
   CCU1->CCIOC |= _BV(STAG);      /* ���� �� ���������� ���� ���,�������� ����������� ���������� � 8 ��� */
   CCU1->CCIOC &= ~ _BV(PDS);
           
   CCU1->T0IC  &= ~ SFR_ICEN;   /* ��������� ���������� ��� ������������ ������� T0 */ 
   CCU1->CC6IC &= ~ SFR_ICEN;    /* ��������� ���������� ��� ���������� */
   
   CCU1->T01CON  &= ~ _BV(T0I);  /* ����������� 1, ������� ������� ��� ������� 26 ��� */
   CCU1->T01CON  &= ~ _BV(T0M);  /* ����� ������� */
   CCU1->T01CON  |= _BV(T0R);    /* c���� ������� */ 
   enable_interrupts(saved);
}


void test_100kHz()
{
 
   GPIO_DSPOUT0 = (ALT2 << OS); // pin 6
   int saved = disable_interrupts();   

   CCU1->CLK = 0x100;
   CCU1->T0REL = 0xFF00;  //���������� ������� ��� �������� ������� 1 ����� 39.0625 ns, P = 39.0625  * 256 = 1/100000
   CCU1->T0 = 0xFF00; 
   CCU1->CC6 = 0xFF80;
   
   CCU1->CCSEM &= ~ _BV(CCSEM6);    //��������� ����� ������ �������
   CCU1->CCSEE &= ~ _BV(CCSEE6);     
   CCU1->CCM1  |=   (MODE_7 << CCM1_MOD6) ; /* ����� ��������� 3: �������� ������� ��������������� �� ������ ����������.��� ������������ ������� �������� ������� ������������.������ ���� ���������� �� ������ ������� */
   CCU1->CCM1  &= ~ _BV(CCM1_ACC6);  /* ��������  ���,������� �������/��������� CC6 ����� �������� � ������� T0 */
   
   CCU1->CCIOC &= ~ _BV(PL);
   CCU1->CCIOC |= _BV(STAG);      /* ���� �� ���������� ���� ���,�������� ����������� ���������� � 8 ��� */
   CCU1->CCIOC &= ~ _BV(PDS);
           
   CCU1->T0IC  &= ~ _BV(CCU_INT_EN);   /* ��������� ���������� ��� ������������ ������� T0 */ 
   CCU1->CC6IC &= ~ _BV(CCU_INT_EN);    /* ��������� ���������� ��� ���������� */
   
   CCU1->T01CON  &= ~ _BV(T0I);  /* ����������� 1, ������� ������� ��� ������� 26 ��� */
   CCU1->T01CON  &= ~ _BV(T0M);  /* ����� ������� */
   CCU1->T01CON  |= _BV(T0R);    /* c���� ������� */ 
   enable_interrupts(saved);
}

void test_1Gz()
{
  int count;
  
   GPIO_DSPOUT0 = (ALT2 << OS); // pin 6
   int input_clk = divide(Prescaler, hw_clk );
   int saved = disable_interrupts();   

   CCU0->CLK = 0x100;
   CCU0->T0 =  0x3C00;
   CCU0->T0REL = 0x3C00;
   CCU0->CC2 = 0x9E00;
   
   CCU0->CCSEM &= ~ _BV(CCSEM2);    //��������� ����� ������ �������
   CCU0->CCSEE &= ~ _BV(CCSEE2);     
   CCU0->CCM0  |=   (MODE_5 << CCM0_MOD2) ; /* ����� ��������� 3: �������� ������� ��������������� �� ������ ����������.��� ������������ ������� �������� ������� ������������.������ ���� ���������� �� ������ ������� */
   CCU0->CCM0  &= ~ _BV(CCM0_ACC2);  /* ��������  ���,������� �������/��������� CC2 ����� �������� � ������� T0 */
   
   CCU0->CCIOC |= _BV(STAG);      /* ���� �� ���������� ���� ���,�������� ����������� ���������� � 8 ���.���������.. */
           
   CCU0->T0IC  &= ~ _BV(CCU_INT_EN);   /* ��������� ���������� ��� ������������ ������� T0 */ 
   CCU0->CC2IC &= ~ _BV(CCU_INT_EN);    /* ��������� ���������� ��� ���������� */
   
   CCU0->T01CON  |= 6;  /* ����������� 1, ������� ������� ��� ������� 26 ��� */
   CCU0->T01CON  &= ~ _BV(T0M);  /* ����� ������� */
   CCU0->T01CON  |= _BV(T0R);    /* c���� ������� */  
}

int main(void)
{   

   ShowMSG(1,(int)"ELF Started!" );
   ClkStateOn(CAPCOM);
   test_pin();
   //test_100kHz();

   SUBPROC((void *)ElfKiller);
   return 0;
}

