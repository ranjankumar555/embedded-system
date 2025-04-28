#include"header.h"
extern unsigned int flag1, flag2, flag3;
void uart0_handler(void)__irq
{
	int r=U0IIR;//identifies uart0 interrupt(rx intrpt or tx intrpt)
	if(r&4)//if data recieved
	{
		temp=U0RBR;//rx data
		U0THR=temp;//loop back
	}
	if(r&2)//if data transmitted
	{
		//uart0_tx_data('1');
	}
	VICVectAddr=0;//to finish isr execution
}
void config_vic_for_uart0(void)
{
	VICIntSelect=0; //all irq interrupt
	VICVectCntl0=6|(1<<5); //int num 6 (uart0) to slot 0 and enable slot 0
	VICVectAddr0=(int)uart0_handler; //store uart0 isr to slot 0
	VICIntEnable|=(1<<6); //enable uart0 interrupt
	U0IER=0x3;//en tx and rx int
}

void eint0_handler(void) __irq{
	flag1 ^= 1;
	EXTINT = 1;
	VICVectAddr = 0;
}
void config_vic_for_eint0(void){
	IODIR0|=(7<<17);
	//PINSEL1 |= 1; 	//p0.16 -> EINT0
	PINSEL0 |= (1<<29);
	EXTMODE = 1;  //EINT0 -> Edge triggered
	EXTPOLAR = 0; //EINT0 -> Active Low 

	//VICIntSelect = 0;
	VICVectCntl1 = 14|(1<<5);
	VICVectAddr1 = (unsigned int)eint0_handler;
	VICIntEnable = 1<<14;
}
