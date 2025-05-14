/*main_nodeB.c*/
#include <LPC21xx.H>
#include "header.h"
#define LED1 (1<<17)
CAN1 r1;
u8 flag;
main(){
	IODIR0|=LED1;
	can1_init();
	uart0_init(9600);
	config_vic_for_can1();
	uart0_tx_string("in nodeB\r\n");
	while(1){
		//can1_rx(&r1);
		if(flag==1){//dataframe is received using can1 rx interrupt
		switch(r1.byteA&0xFF){
			case 1: IOCLR0=LED1; break;
			case 0: IOSET0=LED1; break;	
			case 0x10: /*blink R Indi*/ break;
			case 0x11: /*stop R Indi*/ 	break;
			case 0x12: /*blink L Indi*/ break;	
			case 0x13: /*stop L Indi*/	break;
		}
	}
}
}
