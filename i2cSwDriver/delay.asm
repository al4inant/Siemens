;void Delay(unsigned us);

        RSEG	CODE:CODE
	PUBLIC	Delay
	CODE32
Delay
        CMP R0, #0
        BXEQ LR
        LDR R3, =0xF4B00000 
        LDR R1, [R3, #0x10]  ;R1=beginTime 1
        ADD R0, R1, R0       ;R0=endTime   5
loop:
        LDR R2, [R3, #0x10]
        CMP R2, R1
        BCC _bl      ;������
        CMP R0, R1
        BLS loop     ;������ ��� �����
        CMP R2, R0
        BCC loop     ;������
        BX LR
_bl:
        CMP R0, R1
        BCS _b2     ;������ ��� �����
        CMP R2, R0
        BXCS LR     ;������ ��� �����
_b2:
        CMP R0, R1
        BLS loop    ;������ ��� �����
        BX LR
        
        END
