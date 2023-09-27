#ifndef GPIO_NSG_H_
#define GPIO_NSG_H_

/* 0x700-��� 1(+), 0x500-��� 0(-)  */
#define  GPIO_USART0_RXD    *(volatile int*)  0xF430004C //����=2, nano  pin=4
#define  GPIO_USART0_TXD    *(volatile int*)  0xF4300050 //����=2, nano  pin=3, � ���������
#define  GPIO_USB_DMINUS    *(volatile int*)  0xF4300054 //����=6, nano  pin=2
#define  GPIO_USB_DPLUS     *(volatile int*)  0xF4300058 //����=6, nano  pin=1, � ��������� 
#define  GPIO_USB_VDDP_USB  *(volatile int*)  0xF43000F4 
#define  GPIO_RF_STR1       *(volatile int*)  0xF4300104 //����=0xD, ���� �� dialog(PM_RINGIN),������������ ��� ��������� ������ 

#endif /* GPIO_NSG_H_ */
