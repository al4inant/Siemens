//tbase.h - ������ � ����� ���������� ��� ���������� ����������� ������
//(C)Dimadze
//v1.2

//��������� SGOLD, NEWSGOLD, ELKA

extern void EnableINT(int fi);
extern int  DisableINT();
extern void ExecuteIMB();
extern int *GetTBaseAddr();
extern void UnLockAccess();

//��������� �������� ����� �� ������
char GetByteFromAddress(void *addr);
//����������� ������ ����� �� ������ (���������� �����)
int  ApplyPatch(void *addr, char new_byte);
//����������� ������ ����� �� ������ (������ �����)
int  UndoPatch(void *addr, char old_byte);

/* ��� ������ ���� ������ ���� ������ */
/* �������� ������ �������� */
/* ���� ��� ������� flash ������� ���� ��� ������ */
/* ������� RAM, ������� ��������� ��� flash �������� */
/* �� ����� ������� ��� ������, ������ ������ */
/* ����� � ��� ������ ���� ���������������� ������ */

