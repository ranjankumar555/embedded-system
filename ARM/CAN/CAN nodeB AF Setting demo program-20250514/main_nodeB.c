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
			flag=0;
			uart0_tx_string("nodeB: frame received\r\n");
	  }
	}
}
