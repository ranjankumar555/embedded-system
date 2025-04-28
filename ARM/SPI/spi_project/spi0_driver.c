
#include<lpc21xx.h>
#include "header.h"

void spi0_init(void){
	PINSEL0 |= 0x1500; 	// p0.4-> sck0, 
						// p0.5-> MISO0, 
						// P0.6-> MOSI0;
	
	IODIR0 |= 1<<7;		// p0.7 -> o/p dir
	IOSET0 = 1<<7;		// cs0 = 1;
	
	S0SPCR = 0x20;		// cPOL = cPHA = 0;
						// master mode,
						// MSB first, spi intrpt disabled
	
	S0SPCCR = 15;  		// 1mbps freq;
}

/* spi transfer function */
#define SPIF ((S0SPSR>>7)&1)
unsigned char spi0(unsigned char data){
	S0SPDR = data;	//m->s
	while(SPIF == 0);
	return S0SPDR;	//s->m
}
