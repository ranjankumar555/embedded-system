/*spi0_driver.c*/
#include <LPC21xx.H>
#include "header.h"

void spi0_init(void){
	PINSEL0|=0x1500;//P0.4->SCK 0
									//P0.5->MISO 0
									//P0.6->MOSI 0
	IODIR0|=(1<<7);//P0.7->out dir
	IOSET0=(1<<7);//*CS0=1 	
	S0SPCR=0x20;//CPOL=CPHA=0,
							//Master Mode
							//MSB first
							//SPI0 Intr Disabled
	S0SPCCR=15;//SPI0 freq 1Mbps 
}

/*spi0 transfer function*/
#define SPIF ((S0SPSR>>7)&1)
u8 spi0(u8 data){
	S0SPDR=data;//M-->S
	while(SPIF==0);
	return S0SPDR;//S-->M
}






