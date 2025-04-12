#include <lpc21xx.h>
extern int f1;
static int f3 = 0;

void timer1_handler() __irq
{	
	f1 = 1;
	if(f3){
		IOSET0 = 1<<17;
		f3 = 0;
	}
	else{
		IOCLR0 = 1<<17;
		f3 = 1;
	}


	T0IR=1;
	VICVectAddr=0;
}
void config_vic_for_timer1(void){
	//PINSEL0 |= (1<<25);
	PINSEL0 |= (3<<12); 
	VICIntSelect=0;
	VICVectCntl4=4|(1<<5);
	VICVectAddr4=(unsigned int)timer1_handler;
	VICIntEnable=1<<4;
}
void timer1_config(){
	T0PC=0;
	T0PR=15000000-1;
	T0TC=0;
	T0MR0=10;
	T0MCR=3;
	T0TCR=1;
}




