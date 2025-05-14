/*main_nodeA.c*/
#include "header.h"

CAN1 m1,m2;
main(){
	can1_init();
	m1.id=0x123;
	m1.rtr=0;
	m1.dlc=8;
	m1.byteA=0x44332211;
	m1.byteB=0x88776655;
	
	m2.id=0x1AB;
	m2.rtr=1;//remote-frame
	m2.dlc=4;	
	while(1){
		can1_tx(m1);//send data-frame
		delay_ms(2000);
		can1_tx(m2);//send remote-frame
		delay_ms(2000);
	}
}
