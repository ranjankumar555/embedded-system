/*main_nodeB.c*/
#include "header.h"
CAN1 r1;
main(){
	can1_init();
	uart0_init(9600);
	uart0_tx_string("in nodeB\r\n");
	while(1){
		can1_rx(&r1);
		if(r1.rtr==0)
			uart0_tx_string("in nodeB: data-frame is received\r\n");
		else
			uart0_tx_string("in nodeB: remote-frame is received\r\n");
	}
}
