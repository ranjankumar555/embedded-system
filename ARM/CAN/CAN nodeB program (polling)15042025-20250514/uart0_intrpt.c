#include "header.h"
//extern unsigned int flag1, flag2, flag3;
void uart0_handler(void) __irq
{
	int r=U0IIR;
	if(r&4)
	{
		temp=U0RBR; 
		U0THR=temp; 
	}
	
	VICVectAddr=0;
}
int c=0;
void eint0_handler(void) __irq
{
	static int flag1=0;
	flag1 ^= 1;
	if(flag1){
		IOSET0=ALL_LED;
	}
	else{		
		IOCLR0=ALL_LED;
	}
			
	EXTINT = 1;
	VICVectAddr = 0;
}
void config_vic_for_intrpt123(void)
{
	//for uart0
	c++;
	VICIntSelect=0; 
	VICVectCntl0=6|(1<<5); 
	VICVectAddr0=(int)uart0_handler; 
	VICIntEnable|=(1<<6); 
	U0IER=0x1;

	//for eint1
	PINSEL1 |= 1;
	VICVectCntl1 = 14|(1<<5);
	VICVectAddr1 = (unsigned int)eint0_handler;
	VICIntEnable |= 1<<14;

	
	EXTMODE = 1;  
	EXTPOLAR = 0;
}



