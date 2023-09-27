#ifndef GPIO_H_
#define GPIO_H_

#include <stdint.h>

#define  __IO    volatile

#ifdef NEWSGOLD

#define  GPIO_KP_IN0                  *( __IO uint32_t*)     0xF4300020 
#define  GPIO_KP_IN1                  *( __IO uint32_t*)     0xF4300024 
#define  GPIO_KP_IN2                  *( __IO uint32_t*)     0xF4300028 
#define  GPIO_KP_IN3                  *( __IO uint32_t*)     0xF430002C 
#define  GPIO_KP_IN4                  *( __IO uint32_t*)     0xF4300030 
#define  GPIO_KP_IN5                  *( __IO uint32_t*)     0xF4300034
#define  GPIO_KP_OUT5_OUT6            *( __IO uint32_t*)     0xF4300038 
#define  GPIO_KP_OUT0                 *( __IO uint32_t*)     0xF430003C 
#define  GPIO_KP_OUT1                 *( __IO uint32_t*)     0xF4300040 
#define  GPIO_KP_OUT2                 *( __IO uint32_t*)     0xF4300044 
#define  GPIO_KP_OUT3                 *( __IO uint32_t*)     0xF4300048 


#define  GPIO_USART0_RXD              *( __IO uint32_t*)     0xF430004C         /* 4� ��� �� ���������� ���� */
#define  GPIO_USART0_TXD              *( __IO uint32_t*)     0xF4300050         /* 3� ��� �� ���������� ����,������ */
#define  GPIO_USART0_RTS              *( __IO uint32_t*)     0xF4300054         /* 2� ��� �� ���������� ����,������ */
#define  GPIO_USART0_CTS              *( __IO uint32_t*)     0xF4300058         /* 1� ��� �� ���������� ���� ,�������� �� + */
#define  GPIO_DSPOUT0                 *( __IO uint32_t*)     0xF430005C         /* AC_DCD , 6� ��� �� ���������� ���� */ 
#define  GPIO_18                      *( __IO uint32_t*)     0xF4300068         /*! ����� bluetoth */
#define  GPIO_19                      *( __IO uint32_t*)     0xF430006C         /*! ����� ���-��� �� ��������� */

#define  GPIO_I2C_DAT                 *( __IO uint32_t*)     0xF4300090
#define  GPIO_I2C_CLK                 *( __IO uint32_t*)     0xF4300094

#define  GPIO_I2C_2_DAT               *( __IO uint32_t*)     0xF43000F0
#define  GPIO_SERIAL_EN               *( __IO uint32_t*)     0xF43000F4         
#define  GPIO_I2C_2_CLK               *( __IO uint32_t*)     0xF43000F8

/*
#define  0xF430009B
....................... I2S2 ,�������� �� ���� 
#define  0xF43000A8
*/
#define  GPIO_VCXO_EN                 *( __IO uint32_t*)     0xF43000E8         /*! ���/���� ��������� ���������� RF �����(����������).��� ��������� ���������� ���������� � Dialog/Twigo */
#define  GPIO_RF_STR1                 *( __IO uint32_t*)     0xF4300104         /*! ���� �� Dialog(PM_RINGIN),������������ ��� ��������� ������ ����������� ��� */
#endif

#ifdef SGOLD
#define  GPIO_VCXO_EN                 *( __IO uint32_t*)     0xF43000EC
#endif

/*******************  Bit numeration for GPIO registers  **********************/ 

#define  IS                          0                                          /*! [3:0] (Input Selection) �������� ����� ���������� ����� ��������� �������� �������� ������,���� PS=0 */
#define  OS                          4                                          /*! [6:4] (Output Selection) �������� ����� ���������� ����� ��������� ��������� �������,���� PS=0 */
#define  PS                          8                                          /*! [8] (Port Selection) ���������� : 0-����� ����������� �����-�� �����������(������� �� ������������ IS � OS �����),1-�� ���������:) */
#define  Px                          9                                          /*! [9] (Data of GPIOx) ������� ������,���������� �������� ���������� �� ������: 0-������ �������, 1-������� ������� */
#define  DPx                         10                                         /*! [10] (Direction Control) ����������� �������� ������: 0-����� �������� ������, 1-����� �������� ������� */
#define  PPEN                        12                                         /*! [12] (Push/Pull Enable), 0-Push/pull(����������� �����), 1-Open drain(�������� ����) */
#define  PDPU                        13                                         /*! [14:13] (Pullup/Pulldown Selection),00-��� ������������� ���������,01-Pullup(������������� �������� ��������� � �����), 02-Pulldown(������������� �������� ��������� � �����) */                     
#define  ENAQ                        15                                         /*! [15] 0-��������� ������ ������������ ������� ������, 1-����� �������,������ �������.��������!���� ��� ������ ������ �� �����,�� ����y� ������� �� ������! */

/************************* Definition for IS and OS ***************************/ 
                                                                                
#define  ALT0                        1                                        
#define  ALT1                        2
#define  ALT2                        3
#define  ALT3                        4    
#define  ALT4                        5             
#define  ALT5                        6             
#define  ALT6                        7

/**************************  Definition for PDPU ******************************/ 

#define  PULLUP                      1
#define  PULLDOWN                    2

/**************************  Definition for PDPU ******************************/

#define  PUSHPULL                    0
#define  OPENDRAIN                   1

#endif /* GPIO_H_ */

