//tbsys.asm -  ������ � ������������ � ��������������        
                  CODE32
            
                  RSEG    CODE:CODE
            
            
                  //�������� ������ ����������
                  //R0 = CPSR.f | CPSR.i
                  PUBLIC  EnableINT
            
        EnableINT:
             
                   MRS     R1, CPSR
                   BIC     R1, R1, #0xC0
                   ORR     R1, R1, R0
                   AND     R2, R1, #0x1F
                   CMP     R2, #0x10
            
#ifdef NEWSGOLD
	           SWIEQ   0x04
#else
	           SWIEQ   0x00
#endif

                   MSR     CPSR_c, R1
                   BX      LR
            
                   //��������� ����������
                   PUBLIC  DisableINT
            
        DisableINT:
            
                   MRS     R0, CPSR
                   ORR     R1, R0, #0xC0
                   AND     R2, R0, #0x1F
                   CMP     R2, #0x10
            
#ifdef NEWSGOLD
	           SWIEQ   0x04
#else
	           SWIEQ   0x00
#endif

                   MSR     CPSR_c, R1
                   AND     R0, R0, #0xC0
                   BX      LR  //R0 = CPSR.f | CPSR.i

            
            

        
                   //������ ������� ������� �� ELFPACK
                   PUBLIC  ExecuteIMB

        ExecuteIMB:
 
	           STR	   LR, [SP, #-0x04]!
	           MRS	   R2,  CPSR
            
                   // ������������� � ��������� �����
#ifdef NEWSGOLD
	           SWI     0x04
#else
	           SWI     0x00
#endif
                   // ��������� ����������
	           MRS	   R1, CPSR
	           ORR     R1, R1,#0xC0
	           MSR     CPSR_c, R1
            
	           NOP
	           NOP
	           NOP
            
                  // ��������� ����������� ���������� � �����
       clean_loop:
 
                  // clean entire dcache using test and clean
	          MRC      p15, 0, r15, c7, c10, 3
            
	          NOP
	          NOP
	          NOP
            
	          BNE      clean_loop
	          MOV      R0, #0x00
            
                  // drain write buffer
	          MCR      p15, 0, r0, c7, c10, 4
             
	          NOP
	          NOP
	          NOP
	          NOP
            
                 // invalidate icache
	          MCR	   p15, 0, r0, c7, c5, 0

	          NOP
	          NOP
	          NOP
	          NOP
            
                  // �������
                  // ��������������� ������ �����
	          MSR	   CPSR_c,R2
	          LDR	   PC,[SP], #+0x04
            
                  
                  //���������� ����� ���� ����������
                  PUBLIC   GetTBaseAddr
            
     GetTBaseAddr:
            
 	          STR	   LR, [SP, #-0x04]!
	          MRS	   R2,  CPSR
            
#ifdef NEWSGOLD
	          SWI      0x04
#else
	          SWI      0x00
#endif

	          MRS      R1, CPSR
	          ORR      R1, R1,#0xC0
	          MSR      CPSR_c, R1
           
                  MOV      R0, #0
                  MRC      p15, 0, R0, c2, c0 //R0 = 0x90000 (SGold), R0 = 0x8C000 (ELKA) 
                  
	          MSR	   CPSR_c,R2
	          LDR	   PC,[SP], #+0x04
            
            

                  
                  PUBLIC   UnLockAccess
                 
   UnLockAccess:
     
 	          STR	   LR, [SP, #-0x04]!
	          MRS	   R2,  CPSR
            
#ifdef NEWSGOLD
	          SWI      0x04
#else
	          SWI      0x00
#endif

	          MRS      R1, CPSR
	          ORR      R1, R1,#0xC0
	          MSR      CPSR_c, R1
           
                  MOV      R0, #0xFFFFFFFF
                  MCR      p15, 0, R0, c3, c0 
                  
                  NOP
	          NOP
	          NOP
	          NOP
                  NOP
	          NOP
	          NOP
	          NOP
                  NOP
	          NOP
	          NOP
	          NOP
                  NOP
	          NOP
	          NOP
	          NOP
                  
	          MSR	   CPSR_c,R2
	          LDR	   PC,[SP], #+0x04
                  
                  
                  
                  END