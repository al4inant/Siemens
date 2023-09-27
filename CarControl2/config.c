#include "..\inc\cfg_items.h"

#ifdef NEWSGOLD
#define DEFAULT_DISK "4"
#else
#define DEFAULT_DISK "0"
#endif

   __root const CFG_HDR cfghdr0={CFG_STR_WIN1251,"����� ��������",0,127};
   __root const char MYNUMBER[128]="+7";
    
   __root const CFG_HDR cfghdr1={CFG_STR_WIN1251,"��������� �����",0,127};
   __root const char MAGICWORD[128]="CarControl";

  __root const CFG_HDR cfghdr2_begin={CFG_LEVEL,"��������� ������",1,0};
  
 //================================= Lock ====================================== 
  __root const CFG_HDR cfghdr2_1={CFG_LEVEL,"���������� �� ������",1,0};

   __root const CFG_HDR cfghdr2_1_0_0={CFG_STR_WIN1251,"����� �������",0,127};
   __root const char lock_word[128]="�������";
  
  __root const CFG_HDR cfghdr2_1_0={CFG_CBOX,"��� �������",0,4};
  __root const int lock_t = 0;
  __root const CFG_CBOX_ITEM cfgcbox2_1_1[4]={"��������","�������","������� 2 ����","������� ����� ��������"};

  __root const CFG_HDR cfghdr2_1_2={CFG_CBOX,"������",0,5};
  __root const int lock_key1 = 1; //Lock
  __root const CFG_CBOX_ITEM cfgcbox2_1_3[5]={"�� ������������","TX","RX","CTS","RTS"};
 
  __root const CFG_HDR cfghdr2_1_4={CFG_CBOX,"������ +",0,5};
  __root const int lock_key2 = 0;
  __root const CFG_CBOX_ITEM cfgcbox2_1_5[5]={"�� ������������","TX","RX","CTS","RTS"};
  
  __root const CFG_HDR cfghdr2_1_6={CFG_INT,"����������������� �������(���)",0,3};
  __root const int lock_delay=0;
  
  __root const CFG_HDR cfghdr2_1_7={CFG_LEVEL,"",0,0};
//================================ Unlock ======================================  
   __root const CFG_HDR cfghdr2_2={CFG_LEVEL,"������ � ������",1,0};

   __root const CFG_HDR cfghdr2_2_0_0={CFG_STR_WIN1251,"����� �������",0,127};
   __root const char unlock_word[128]="�������";   
   
  __root const CFG_HDR cfghdr2_2_0={CFG_CBOX,"��� �������",0,4};
  __root const int unlock_t = 0;
  __root const CFG_CBOX_ITEM cfgcbox2_2_1[4]={"��������","�������","������� 2 ����","������� ����� ��������"};

  __root const CFG_HDR cfghdr2_2_2={CFG_CBOX,"������",0,5};
  __root const int unlock_key1 = 2;
  __root const CFG_CBOX_ITEM cfgcbox2_2_3[5]={"�� ������������","TX","RX","CTS","RTS"};
 
  __root const CFG_HDR cfghdr2_2_4={CFG_CBOX,"������ +",0,5};
  __root const int unlock_key2 = 0; //Unlock
  __root const CFG_CBOX_ITEM cfgcbox2_2_5[5]={"�� ������������","TX","RX","CTS","RTS"};
  
  __root const CFG_HDR cfghdr2_2_6={CFG_INT,"����������������� �������(���)",0,3};
  __root const int unlock_delay=0;
  
  __root const CFG_HDR cfghdr2_2_7={CFG_LEVEL,"",0,0}; 
 //================================ Start ======================================  
  __root const CFG_HDR cfghdr2_3={CFG_LEVEL,"����������",1,0};

   __root const CFG_HDR cfghdr2_3_0_0={CFG_STR_WIN1251,"����� �������",0,127};
   __root const char start_word[128]="�����";
  
  __root const CFG_HDR cfghdr2_3_0={CFG_CBOX,"��� �������",0,4};
  __root const int start_t = 2;
  __root const CFG_CBOX_ITEM cfgcbox2_3_1[4]={"��������","�������","������� 2 ����","������� ����� ��������"};

  __root const CFG_HDR cfghdr2_3_2={CFG_CBOX,"������",0,5};
  __root const int start_key1 = 3;
  __root const CFG_CBOX_ITEM cfgcbox2_3_3[5]={"�� ������������","TX","RX","CTS","RTS"};
 
  __root const CFG_HDR cfghdr2_3_4={CFG_CBOX,"������ +",0,5};
  __root const int start_key2 = 0;
  __root const CFG_CBOX_ITEM cfgcbox2_3_5[5]={"�� ������������","TX","RX","CTS","RTS"};
  
  __root const CFG_HDR cfghdr2_3_6={CFG_INT,"����������������� �������(���)",0,3};
  __root const int start_delay=3;
  
  __root const CFG_HDR cfghdr2_3_7={CFG_LEVEL,"",0,0}; 
 //================================ Stop ======================================   
  __root const CFG_HDR cfghdr2_4={CFG_LEVEL,"���� ���������",1,0};

   __root const CFG_HDR cfghdr2_4_0_0={CFG_STR_WIN1251,"����� �������",0,127};
   __root const char stop_word[128]="����";
  
  __root const CFG_HDR cfghdr2_4_0={CFG_CBOX,"��� �������",0,4};
  __root const int stop_t = 2;
  __root const CFG_CBOX_ITEM cfgcbox2_4_1[4]={"��������","�������","������� 2 ����","������� ����� ��������"};

  __root const CFG_HDR cfghdr2_4_2={CFG_CBOX,"������",0,5};
  __root const int stop_key1 = 3;
  __root const CFG_CBOX_ITEM cfgcbox2_4_3[5]={"�� ������������","TX","RX","CTS","RTS"};
 
  __root const CFG_HDR cfghdr2_4_4={CFG_CBOX,"������ +",0,5};
  __root const int stop_key2 = 0;
  __root const CFG_CBOX_ITEM cfgcbox2_4_5[5]={"�� ������������","TX","RX","CTS","RTS"};
  
  __root const CFG_HDR cfghdr2_4_6={CFG_INT,"����������������� �������(���)",0,3};
  __root const int stop_delay=3;
  
  __root const CFG_HDR cfghdr2_4_7={CFG_LEVEL,"",0,0}; 
 //================================ Trunk ======================================  
  __root const CFG_HDR cfghdr2_5={CFG_LEVEL,"������� ��������",1,0};

   __root const CFG_HDR cfghdr2_5_0_0={CFG_STR_WIN1251,"����� �������",0,127};
   __root const char trunk_word[128]="��������"; 
  
  __root const CFG_HDR cfghdr2_5_0={CFG_CBOX,"��� �������",0,4};
  __root const int trunk_t = 1;
  __root const CFG_CBOX_ITEM cfgcbox2_5_1[4]={"��������","�������","������� 2 ����","������� ����� ��������"};

  __root const CFG_HDR cfghdr2_5_2={CFG_CBOX,"������",0,5};
  __root const int trunk_key1 = 4;
  __root const CFG_CBOX_ITEM cfgcbox2_5_3[5]={"�� ������������","TX","RX","CTS","RTS"};
 
  __root const CFG_HDR cfghdr2_5_4={CFG_CBOX,"������ +",0,5};
  __root const int trunk_key2 = 0;
  __root const CFG_CBOX_ITEM cfgcbox2_5_5[5]={"�� ������������","TX","RX","CTS","RTS"};
  
  __root const CFG_HDR cfghdr2_5_6={CFG_INT,"����������������� �������(���)",0,6};
  __root const int trunk_delay=2;
  
  __root const CFG_HDR cfghdr2_5_7={CFG_LEVEL,"",0,0};   
 //================================ Search ======================================
  __root const CFG_HDR cfghdr2_6={CFG_LEVEL,"�����",1,0};

   __root const CFG_HDR cfghdr2_6_0_0={CFG_STR_WIN1251,"����� �������",0,127};
   __root const char search_word[128]="�����";
  
  __root const CFG_HDR cfghdr2_6_0={CFG_CBOX,"��� �������",0,4};
  __root const int search_t = 0;
  __root const CFG_CBOX_ITEM cfgcbox2_6_1[4]={"��������","�������","������� 2 ����","������� ����� ��������"};

  __root const CFG_HDR cfghdr2_6_2={CFG_CBOX,"������",0,5};
  __root const int search_key1 = 1;
  __root const CFG_CBOX_ITEM cfgcbox2_6_3[5]={"�� ������������","TX","RX","CTS","RTS"};
 
  __root const CFG_HDR cfghdr2_6_4={CFG_CBOX,"������ +",0,5};
  __root const int search_key2 = 2;
  __root const CFG_CBOX_ITEM cfgcbox2_6_5[5]={"�� ������������","TX","RX","CTS","RTS"};
  
  __root const CFG_HDR cfghdr2_6_6={CFG_INT,"����������������� �������(���)",0,3};
  __root const int search_delay=0;
  
  __root const CFG_HDR cfghdr2_6_7={CFG_LEVEL,"",0,0};   
 //================================ PanicOn ======================================  
  __root const CFG_HDR cfghdr2_7={CFG_LEVEL,"������ ���",1,0};

   __root const CFG_HDR cfghdr2_7_0_0={CFG_STR_WIN1251,"����� �������",0,127};
   __root const char panicOn_word[128]="������";
  
  __root const CFG_HDR cfghdr2_7_0={CFG_CBOX,"��� �������",0,4};
  __root const int panicOn_t = 1;
  __root const CFG_CBOX_ITEM cfgcbox2_7_1[4]={"��������","�������","������� 2 ����","������� ����� ��������"};

  __root const CFG_HDR cfghdr2_7_2={CFG_CBOX,"������",0,5};
  __root const int panicOn_key1 = 1;
  __root const CFG_CBOX_ITEM cfgcbox2_7_3[5]={"�� ������������","TX","RX","CTS","RTS"};
  
  __root const CFG_HDR cfghdr2_7_4={CFG_CBOX,"������ +",0,5};
  __root const int panicOn_key2 = 2;
  __root const CFG_CBOX_ITEM cfgcbox2_7_5[5]={"�� ������������","TX","RX","CTS","RTS"};
  
  __root const CFG_HDR cfghdr2_7_6={CFG_INT,"����������������� �������(���)",0,3};
  __root const int panicOn_delay=2;
  
  __root const CFG_HDR cfghdr2_7_7={CFG_LEVEL,"",0,0};   
 //=============================== PanicOff ======================================   
   __root const CFG_HDR cfghdr2_8={CFG_LEVEL,"������ ����",1,0};

   __root const CFG_HDR cfghdr2_8_0_0={CFG_STR_WIN1251,"����� �������",0,127};
   __root const char panicOff_word[128]="����";
   
  __root const CFG_HDR cfghdr2_8_0={CFG_CBOX,"��� �������",0,4};
  __root const int panicOff_t = 0;
  __root const CFG_CBOX_ITEM cfgcbox2_8_1[4]={"��������","�������","������� 2 ����","������� ����� ��������"};

  __root const CFG_HDR cfghdr2_8_2={CFG_CBOX,"������",0,5};
  __root const int panicOff_key1 = 1;
  __root const CFG_CBOX_ITEM cfgcbox2_8_3[5]={"�� ������������","TX","RX","CTS","RTS"};
 
  __root const CFG_HDR cfghdr2_8_4={CFG_CBOX,"������ +",0,5};
  __root const int panicOff_key2 = 2;
  __root const CFG_CBOX_ITEM cfgcbox2_8_5[5]={"�� ������������","TX","RX","CTS","RTS"};
  
  __root const CFG_HDR cfghdr2_8_6={CFG_INT,"����������������� �������(���)",0,3};
  __root const int panicOff_delay=0;
  
  __root const CFG_HDR cfghdr2_8_7={CFG_LEVEL,"",0,0}; 
  //===============================================================================  
  __root const CFG_HDR cfghdr2_end={CFG_LEVEL,"",0,0};

 /*   
  //Illumination by BoBa 19.04.2007
  __root const CFG_HDR cfghdr3={CFG_LEVEL,"���������",1,0};

#ifdef ELKA
  __root const CFG_HDR cfghdr3_1_={CFG_CBOX,"Blink SLI",0,4};
  __root const int SLI_State = 0;
  __root const CFG_CBOX_ITEM cfgcbox3_2[4]={"No","Shine","Blink slow","Blink fast"};
#endif 
  
  __root const CFG_HDR cfghdr3_3={CFG_INT,"Display on Recv",0,100};
  __root const unsigned int ILL_DISP_RECV=30;

  __root const CFG_HDR cfghdr3_4={CFG_INT,"Keys on Recv",0,100};
  __root const unsigned int ILL_KEYS_RECV=30;

  __root const CFG_HDR cfghdr3_5={CFG_INT,"DynLight on Recv",0,100};
  __root const unsigned int ILL_DYNL_RECV=100;
  
  __root const CFG_HDR cfghdr3_6={CFG_INT,"Timeout on Recv",0,60};
  __root const unsigned int ILL_RECV_TMR=3;

  __root const CFG_HDR cfghdr3_7={CFG_INT,"Fade on Recv",0,1000};
  __root const unsigned int ILL_RECV_FADE=256;

  __root const CFG_HDR cfghdr3_8={CFG_INT,"Fade on Off",0,1000};
  __root const unsigned int ILL_OFF_FADE=256; 
  __root const CFG_HDR cfghdr3_9={CFG_LEVEL,"",0,0};
*/
  
  //Notify
  __root const CFG_HDR cfghdr4={CFG_LEVEL,"����",1,0};

  __root const CFG_HDR cfghdr4_1={CFG_CBOX,"�������� ����",0,2};
  __root const int soundEnabled = 1;
  __root const CFG_CBOX_ITEM cfgcbox4_2[2]={"���","��"};

#ifdef NEWSGOLD  
  __root const CFG_HDR cfghdr4_3={CFG_UINT,"���������(0-5)",0,5};
  __root const int sndVolume=5;
#else
  __root const CFG_HDR cfghdr4_3={CFG_UINT,"���������(0-15)",0,15};
  __root const int sndVolume=15; 
#endif  
  __root const CFG_HDR cfghdr4_7={CFG_LEVEL,"",0,0};
  
  __root const CFG_HDR cfghdr5={CFG_STR_UTF8,"����� ���������",0,127};
  __root const char DIR[128]=DEFAULT_DISK ":\\ZBin\\CarControl\\";

  //Voltage
  __root const CFG_HDR cfghdr6={CFG_LEVEL, "�������� ����������", 1, 0};
  
  __root const CFG_HDR cfghdr61={CFG_CBOX, "��������", 0, 2};
  __root const int VOLTAGE_CONTROL_ENA = 1;
  __root const CFG_CBOX_ITEM cfgcbox61[2]={"���","��"};
  
  __root const CFG_HDR cfghdr62={CFG_UINT,"�������� ���������(���)", 10, 60};
  __root const int MEASUREMENT_TIME = 60;
  
  __root const CFG_HDR cfghdr63={CFG_UINT,"VConst", 0, 1000};
  __root const int VConst = 143;

  __root const CFG_HDR cfghdr64={CFG_UINT, "VOffset", 0, 1000};
  __root const int VOffset = 200;  
  
  __root const CFG_HDR cfghdr65={CFG_CBOX, "���� VOffset", 0, 2};
  __root const int VOffsetMode = 0;
  __root const CFG_CBOX_ITEM cfgcbox65[2]={"-","+"};    
 
  __root const CFG_HDR cfghdr6_end={CFG_LEVEL,"",0,0};
  
  //
  