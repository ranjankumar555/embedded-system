#include "header.h"
void lcd_data(unsigned char data){
	  unsigned int temp=0;
	 // Higher Nibble
	 IOCLR1 = 0xFE<<16;   // clear all pins
	 temp = (data & 0XF0)<<16;
	 IOSET1 = temp;

	 IOSET1 = 1<<17; //RS = 1  -> data mode
	 IOCLR1 = 1<<18;  //RW = 0  -> write
	 IOSET1 = 1<<19; //EN = 1  -> Enable
	 delay_ms(2);
	 IOCLR1 = 1<<19; //EN = 0; -> Disable 

	 // Lower Nibble 
	 IOCLR1 = 0xFE<<16;   // clear all pins
	 temp = (data & 0X0F)<<20;
	 IOSET1 = temp;

	 IOSET1 = 1<<17; //RS = 1  -> data mode
	 IOCLR1 = 1<<18;  //RW = 0  -> write
	 IOSET1 = 1<<19; //EN = 1  -> Enable
	 delay_ms(2);
	 IOCLR1 = 1<<19; //EN = 0; -> Disable
}

void  lcd_cmd(unsigned char cmd){
	 unsigned int temp=0;
	 // Higher Nibble
	 IOCLR1 = 0xFE<<16;   // clear all pins
	 temp = (cmd & 0XF0)<<16;
	 IOSET1 = temp;

	 IOCLR1 = 1<<17; //RS = 1  -> cmd mode
	 IOCLR1 = 1<<18;  //RW = 0  -> write
	 IOSET1 = 1<<19; //EN = 1  -> Enable
	 delay_ms(2);
	 IOCLR1 = 1<<19; //EN = 0; -> Disable

	 // Lower Nibble
	 IOCLR1 = 0xFE<<16;   // clear all pins
	 temp = (cmd & 0X0f)<<20;
	 IOSET1 = temp;

	 IOCLR1 = 1<<17; //RS = 1  -> cmd mode
	 IOCLR1 = 1<<18;  //RW = 0  -> write
	 IOSET1 = 1<<19; //EN = 1  -> Enable
	 delay_ms(2);
	 IOCLR1 = 1<<19; //EN = 0; -> Disable
}
void lcd_init(){
   IODIR1 = 0xFE<<16;	 // set p0.16 to p0.23 as o/p dir
   PINSEL2 = 0x0;

   IOCLR1 = 1<<19;
   lcd_cmd(0X02);    // enable 4 bit mode  
   lcd_cmd(0x28);    // enable double line cursor in 8bit lcd mode
   lcd_cmd(0x0E);    //	enable cursor and set  to home position
   lcd_cmd(0X01);    // clear screen

}

void lcd_str(char *p){
	while(*p){
		lcd_data(*p);
		p++;
	}
}

void lcd_cgram(void){
	int i;
	unsigned char arr[8] = {0x17, 0x14, 0x14, 0x1f, 0x05, 0x05, 0x1d, 0x00};
	lcd_cmd(0x48);	 // page1 address
	for(i = 0; i<8; i++){
		lcd_data(arr[i]);
	}
}
