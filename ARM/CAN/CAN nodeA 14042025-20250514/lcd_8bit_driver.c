/*
#include "header.h"
void lcd_data(unsigned char data){
	 IOCLR0 = 0x7FF;   // clear all pins
	 IOSET0 = data;

	 IOSET0 = 1<<8; //RS = 1  -> data mode
	 IOCLR0 = 1<<9  //RW = 0  -> write
	 IOSET0 = 1<<10 //EN = 1  -> Enable
	 delay_ms(2);
	 IOCLR0 = 1<<10 //EN = 0; -> Disable 
}

void  lcd_cmd(unsigned char cmd){
	 IOCLR0 = 0x7FF;   // clear all pins
	 IOSET0 = cmd;

	 IOSET0 = 1<<8; //RS = 0  -> cmd mode
	 IOCLR0 = 1<<9  //RW = 0  -> write
	 IOSET0 = 1<<10 //EN = 1  -> Enable
	 delay_ms(2);
	 IOCLR0 = 1<<10 //EN = 0; -> Disable
}
void lcd_init(){
   IODIR0 = 0x7FF;	 // set p0.0 to p0.10 as o/p dir
   lcd_cmd(0x38);    // enable double line cursor in 8bit lcd mode
   lcd_cmd(0x0E);    //	enable cursor and set  to home position
   lcd_cmd(0X01);    // clear screen

}*/
