/******************************************************************************/
/*                ������ ��� ������ � Measurement Interface                   */
/*                                                                            */
/* ����. �������� �������� MEAS.DATA ����� ���� 0 ��� 4095(0xFFF)             */
/* ������� �� ���������� �����������.                                         */
/* MEAS.DATA == 2048(0x800) - ��� ������� ��������. �� �� �������� �� 0x802   */
/* ���������� ��� ��� ���������� ����� ���������� 4095-2048=2047(0x7FF).      */
/* ������� ���������� ~2000 mV.                                               */
/* ����������� ��������: R2=2K, R1=6.8K+6.8K=13.6K                            */
/* ��������� �� ���� ���������� ��������� == ~15.2V                           */  
/*  +                                                                         */             
/*    |                                                                       */
/*   | |                                                                      */
/*   | | R1                                                                   */
/*    |                                                                       */
/*    ------------- M2                                                        */
/*    |                                                                       */
/*   | |                                                                      */ 
/*   | | R2                                                                   */
/*    |                                                                       */
/*  - ------------- GND                                                       */
/******************************************************************************/

#include "../inc/swilib.h"
#include "../inc/nu_swilib.h"
#include "irq_work.h"
#include "clkman.h"

#ifdef NEWSGOLD
#include "../inc/reg8876.h"
#else
#include "../inc/reg8875.h"
#endif

#define PM_CHARGE_UC   GPIO.TOUT1
#define HISR_STACK_SIZE 512

int adata=-1, adata0, adata1, adata2, adata3, adata4, adata5, adata6;
static void (*callback)(void)=NULL;

NU_HISR hisr;
unsigned long hisr_stack[HISR_STACK_SIZE];

IRQ_DESC irq_desc;
int saved_meas_ctrl2;

static void meas_rdyirq(int vector)//vector==0x46
{
  MEAS.RDYIRQ = 0x4000;//�������� ����
  
  if (MEAS.STAT & MEAS_READY)
  {
    MEAS.RDYIRQ = 0;//������ ��������� 
    MEAS.CTRL2 &=~ MEAS_ENTRIG;
    
    adata0=MEAS.DATA0;
    adata1=MEAS.DATA1;
    adata2=MEAS.DATA2;
    adata3=MEAS.DATA3;
    adata4=MEAS.DATA4;
    adata5=MEAS.DATA5;
    adata6=MEAS.DATA6;
    
    MEAS.CTRL2=saved_meas_ctrl2;//���������������
    irq_set_prio(0x72, 8);//������������ ���������� gsm_tpu_measur
    //irq_set_prio(0x46, 0);//���������. �������������
    
    //PM_CHARGE_UC &= ~ GPIO_ENAQ;//�������� �������
    NU_Activate_HISR(&hisr);
  }
}

static void H_MEAS_RDY_M2_entry()
{
  //MEAS.DATAX: 0x800-�������� ��� ����, 0xFFF-����. ��������
  adata = divide(7, adata0+adata1+adata2+adata3+adata4+adata5+adata6);
  
  if (callback)
    callback();
}

int MEAS_Init(void callback_func())
{
  STATUS status=NU_Create_HISR(&hisr, "H_MEAS_RDY_M2", H_MEAS_RDY_M2_entry, 0, (void*)hisr_stack, HISR_STACK_SIZE);
  
  if (status==NU_SUCCESS)
  {
    callback=callback_func;
    irq_req(0x46, 3, 8, meas_rdyirq, &irq_desc);
    return 1;
  }
  else return 0;
}

void MEAS_Delete()
{
  callback=NULL;
  NU_Delete_HISR(&hisr); 
}

void MEAS_Start()
{
   //PM_CHARGE_UC |= GPIO_ENAQ;//��������� �������(����� ��������� ����� ���������)
   irq_set_prio(0x72, 0);//��������� ���������� GSM �������, irq_n==0x72
   
   //ClkStateOn(MEASIF_MASK);//���������� ��������
   MEAS.CLK &= ~ 1;
   MEAS.CLK &= 0x114;
   saved_meas_ctrl2 = MEAS.CTRL2;//�����������
   MEAS.CTRL2 &=~ MEAS_ENTRIG;

   MEAS.RDYIRQ = 0x4000;//����� ����� ����������
   MEAS.RDYIRQ = 0x1000;//���������� ���������� 
   
   //while (MEAS.STAT & MEAS_BUSY);//�����...//������ ���� �� ����������� ����������
   MEAS.CTRL2=0x30300003; //������-� ��� ������ ���������� � M2
   //while ((MEAS.STAT & MEAS_READY) == 0);//������ ���� �� ����������� ����������
}




