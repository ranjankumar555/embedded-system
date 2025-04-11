#include<lpc21xx.h>
#include "header.h"

void lcd_data(unsigned char data){
  unsigned int temp;
  
  /* higher Nibble */
  IOCLR1 = 0xFE << 16;
  temp = (data & 0XF0)<<16;
  IOSET1 = temp;

  IOSET1 = 1<<17;
  IOCLR1 = 1<<18;
  IOSET1 = 1<<19;
  delay_ms(2);
  IOCLR1 = 1<<19;

  /* Lower Nibble */
  IOCLR1 = 0xFE << 16;
  temp = (data & 0X0F)<<20;
  IOSET1 = temp;

  IOSET1 = 1<<17;
  IOCLR1 = 1<<18;
  IOSET1 = 1<<19;
  delay_ms(2);
  IOCLR1 = 1<<19;

}

void lcd_cmd(unsigned char cmd){
  
  unsigned int temp;

  /* higher Nibble */
  IOCLR1 = 0xFE << 16;
  temp = (cmd & 0XF0)<<16;
  IOSET1 = temp;

  IOCLR1 = 1<<17;
  IOCLR1 = 1<<18;
  IOSET1 = 1<<19;
  delay_ms(2);
  IOCLR1 = 1<<19;

  /* Lower Nibble */
  IOCLR1 = 0xFE << 16;
  temp = (cmd & 0X0F)<<20;
  IOSET1 = temp;

  IOCLR1 = 1<<17;
  IOCLR1 = 1<<18;
  IOSET1 = 1<<19;
  delay_ms(2);
  IOCLR1 = 1<<19;
}

void lcd_init(void){
 IODIR1 = 0xFE<<16;
 PINSEL2 = 0x0;
 IOCLR1 = 1<<19;
 lcd_cmd(0x02);
 lcd_cmd(0x28);
 lcd_cmd(0x0e);
 lcd_cmd(0x01);
 //lcd_cmd(0x80);
}
void lcd_str(char* p){
	while(*p){
		lcd_data(*p);
		p++;
	}
}

void lcd_cgram(void){
	int i;
	unsigned char arr[8] = {0X17, 0X14, 0X14, 0X1F, 0X05, 0X05, 0X1D, 0X00};
	lcd_cmd(0X48); //starting address of page1
	for(i = 0; i<8; i++){
		lcd_data(arr[i]);
	}
}

