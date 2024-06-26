/*
 * Copyright (c) 2011-2024, Shanghai Real-Thread Electronic Technology Co.,Ltd
 *
 * Change Logs:
 * Date           Author       Notes
 * 2022-08-29     RT-Thread    first version
 */


#ifndef  CPUPORT_H__
#define  CPUPORT_H__

/* the exception stack without VFP registers */
struct rt_hw_exp_stack
{
    unsigned long r0;
    unsigned long r1;
    unsigned long r2;
    unsigned long r3;
    unsigned long r4;
    unsigned long r5;
    unsigned long r6;
    unsigned long r7;
    unsigned long r8;
    unsigned long r9;
    unsigned long r10;
    unsigned long fp;
    unsigned long ip;
    unsigned long sp;
    unsigned long lr;
    unsigned long pc;
    unsigned long cpsr;
};

struct rt_hw_stack
{
    unsigned long cpsr;
    unsigned long r0;
    unsigned long r1;
    unsigned long r2;
    unsigned long r3;
    unsigned long r4;
    unsigned long r5;
    unsigned long r6;
    unsigned long r7;
    unsigned long r8;
    unsigned long r9;
    unsigned long r10;
    unsigned long fp;
    unsigned long ip;
    unsigned long lr;
    unsigned long pc;
};

#define USERMODE    0x10
#define FIQMODE     0x11
#define IRQMODE     0x12
#define SVCMODE     0x13
#define MONITORMODE 0x16
#define ABORTMODE   0x17
#define HYPMODE     0x1b
#define UNDEFMODE   0x1b
#define MODEMASK    0x1f
#define NOINT       0xc0

#define T_Bit       (1<<5)
#define F_Bit       (1<<6)
#define I_Bit       (1<<7)
#define A_Bit       (1<<8)
#define E_Bit       (1<<9)
#define J_Bit       (1<<24)


// rt_inline void rt_hw_isb(void)
// {
//     __asm volatile ("isb":::"memory");
// }

// rt_inline void rt_hw_dmb(void)
// {
//     __asm volatile ("dmb":::"memory");
// }

// rt_inline void rt_hw_dsb(void)
// {
//     __asm volatile ("dsb":::"memory");
// }

#endif  /*CPUPORT_H__*/
