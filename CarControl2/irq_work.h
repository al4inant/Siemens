#ifndef IRQ_WORK_H
#define IRQ_WORK_H

typedef struct{
  char state; //3
  char prio; //max priority==15
  char unk2;
  char unk3;  
  void (*handler)(int vector);
} IRQ_DESC;

#ifdef NEWSGOLD
#define IRQ_STATE_TAB_BASE    0x2E38
#define IRQ_HANDLER_TAB_BASE  0x2ED8
#else
#define IRQ_STATE_TAB_BASE    0x23E0
#define IRQ_HANDLER_TAB_BASE  0x245C
#endif

#define IRQ_PRIO_TAB_BASE     0xF2800030

extern int irq_set_prio(int irq_n, int prio);
extern int irq_get_prio(int irq_n);
extern void irq_req(int irq_n, int state, int prio, void handler(int), IRQ_DESC* d);

#endif

