/*mcp3204_driver.c*/
#include <LPC21xx.H>
#include "header.h"

u32 mcp3204_read(u8 ch_num){
	u32 result=0;
	u8 byteH=0,byteL=0;
	ch_num<<=6;//set ch_num
	
	IOCLR0=(1<<7);//CS0=0;
	spi0(0x06);//Start bit, SGL mode, D2
	byteH=spi0(ch_num);//set ch_num 2
	byteL=spi0(0x00);
	IOSET0=(1<<7);//CS0=1
	
	byteH=byteH&0x0F;//mask higher nibble
	result=(byteH<<8)|byteL;//merge 12bits result
	return result;
}




