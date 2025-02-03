#include<lpc21xx.h>
#include "lcd_header.h"
void lcd_data(unsigned char data){
IOCLR0 = 0x7FF;
IOSET0 = data;

IOSET0 = 1<<8;
IOCLR0 = 1<<9;
IOSET0 = 1<<10;
delay_ms(2);
IOCLR0 = 1<<10;

}
void lcd_cmd(unsigned char cmd){
IOCLR0 = 0x7FF;
IOSET0 = cmd;

IOCLR0 = 1<<8;
IOCLR0 = 1<<9;
IOSET0 = 1<<10;
delay_ms(2);
IOCLR0 = 1<<10;

}

void lcd_init(void){
 IODIR0 = 0x7FF;
 lcd_cmd(0X38);
 lcd_cmd(0X0e);
 lcd_cmd(0X01);

}
void lcd_str(unsigned char* p){
while (*p){
lcd_data(*p);
p++;
}
}
