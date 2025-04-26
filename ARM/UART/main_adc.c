#include "header.h"
#include<stdio.h>
//unsigned char temp, flag;
//int f1;
//int main(){
//	char arr[20];
//	int i=0;
//	unsigned int temp;
//	adc_init();
//	uart0_init(9600);
//	while(1){
//		temp = adc_read(2);
//		//int_str(arr, temp);
//		sprintf(arr, "%d", temp);
//		uart0_tx_str(arr);
//		uart0_tx_str("\r\n");
//		delay_ms(250);
//	}
//
//}


/* MCP9700 temperature sensor interfacing */

int main(){
unsigned int adcout;
float vout, tempr;
adc_init();
uart0_init(9600);
lcd_init();
while(1){
	lcd_cmd(0x01);
	adcout = adc_read(1); // channel-1: AIN1
	vout = (adcout*3.3)/1023;
	tempr = (vout - 0.5)/0.01;

	uart0_tx_float(tempr);

	lcd_cmd(0x80);
	lcd_str_float(tempr);
	delay_sec(1);
	
	uart0_tx_str("\r\n");
	
}

}
