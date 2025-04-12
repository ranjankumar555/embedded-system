/*#include "header.h"
#include<stdio.h>
unsigned char temp, flag;
int f1;
int main(){
	char arr[20];
	int i=0;
	unsigned int temp;
	adc_init();
	uart0_init(9600);
	//config_vic_for_timer1();
	//timer1_config();
	//IODIR0 = 1<<17;
	while(1){
		temp = adc_read(2);
		//int_str(arr, temp);
		sprintf(arr, "%d", temp);
		uart0_tx_str(arr);
		uart0_tx_str("\r\n");
	}

}
*/

/* MCP9700 temperature sensor interfacing */
/*int main(){
unsigned int adcout;
float vout, tempr;
adc_init();
uart0_init(9600);

while(1){
	adcout = adc_read(1); // channel-1: AIN1
	vout = (adcout*3.3)/1023;
	tempr = (vout - 0.5)/0.01;

	uart0_tx_float(tempr);
	uart0_tx_str("\r\n");
}

}


 */
