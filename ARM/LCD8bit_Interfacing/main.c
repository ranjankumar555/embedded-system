#include "lcd_header.h"
#include<lpc21xx.h>
main(){
	lcd_init();
	lcd_cmd(0X80);
	lcd_cgram();
	lcd_data(1);
	

}
