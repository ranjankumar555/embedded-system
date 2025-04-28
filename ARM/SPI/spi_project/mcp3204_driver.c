#include<lpc21xx.h>
#include "header.h"
unsigned int mcp3204_read(unsigned char ch_num){
	unsigned char byteH = 0, byteL = 0;
	unsigned int result = 0;

	IOCLR0 = 1<<7; // cs0 = 0;
	spi0(0x6); // 1st transfer-> start bit, singal mode, d2
	byteH = spi0(ch_num<<6);
	byteL = spi0(0x00);
	IOSET0 = 1<<7;

	byteH = byteH & 0xf;
	result = (byteH<<8) | byteL;
	return result;
} 

