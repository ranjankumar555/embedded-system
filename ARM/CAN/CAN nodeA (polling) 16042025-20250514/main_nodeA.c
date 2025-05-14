/*main_nodeA.c*/
#include <LPC21xx.H>
#include "header.h"
/*
In nodeB:
data is 0x1: Turn ON LED
data is 0x0: Turn OFF LED
*/
#define SW1 ((IOPIN0>>14)&1)
CAN1 m1,m2;
main(){
	can1_init();
	m1.id=0x123;
	m1.rtr=0;
	m1.dlc=1;
	m1.byteA=0;
	
	while(1){
		if(SW1==0){//waiting for sw press
			delay_ms(50);//to avoid key debouncing
			while(SW1==0);//waiting for sw release	
			m1.byteA^=1;
			can1_tx(m1);//send data-frame
		}

	}
}
