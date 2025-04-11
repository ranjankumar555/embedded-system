#include<lpc21xx.h>
#include "header.h"
#define LED1 (1<<17)
#define LED2 (1<<18)
#define LED3 (1<<19)
extern unsigned char temp, flag;
void uart0_handler(void) __irq{
	int v = U0IIR;
	v &= 0x0E;
	if(v==4){
		temp = U0RBR;
		//U0THR = temp;		
		flag = 1;
	}				    
	VICVectAddr = 0;					
}

void config_vic_for_uart0(void){
	
	VICIntSelect = 0; 			//all irq type
	VICVectCntl0 = 6 | (1<<5); 	// slot0 interrupt no 6
	VICVectAddr0 = (unsigned int)uart0_handler; //slot0
	VICIntEnable = (1<<6); 		// enable uart0 interrupt in vic peri.
	U0IER = 3;	   				//enable uart0 interrupt in Uart0 peri.
}

/********* External Interrupt ********/
void eint0_handler(void) __irq{
 	static unsigned char flag = 0;
	flag ^= 1;

	if(flag){
		IOSET0 = LED1;
		IOSET0 = LED2;
		IOSET0 = LED3;
	}
	else{
		IOCLR0 = LED1;
		IOCLR0 = LED2;
		IOCLR0 = LED3;
	}
	EXTINT = 1;
	VICVectAddr = 0;
}

void config_vic_for_eint0(void){
	IODIR0 |= LED1;
	IODIR0 |= LED2;
	IODIR0 |= LED3;
	//PINSEL1 |= 1; 	//p0.16 -> EINT0
	PINSEL0 |= (1<<29);
	EXTMODE = 1;  //EINT0 -> Edge triggered
	EXTPOLAR = 0; //EINT0 -> Active Low 

	VICIntSelect = 0;
	VICVectCntl1 = 14|(1<<5);
	VICVectAddr1 = (unsigned int)eint0_handler;
	VICIntEnable = 1<<14;

}