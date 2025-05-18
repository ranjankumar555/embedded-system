#include <lpc21xx.h>
#include "headerb.h"
extern u32 extflag;
void EINT0_Handler(void) __irq
{
        can1 m;
        m.id = 0x50;
        m.dlc = 8;
        m.rtr = 1;
        can1_tx(m);
        extflag ^= 1;
        EXTINT = 1;
        VICVectAddr = 0;
}
void config_VIC_for_EINT0(void)
{
		PINSEL1 |= 1;
        VICIntSelect |= 0;
        VICVectCntl1 = 14 | (1 << 5);
        VICVectAddr1 = (u32)EINT0_Handler;
        VICIntEnable |= (1 << 14);
		EXTMODE = 1;
        EXTPOLAR = 0;
}

