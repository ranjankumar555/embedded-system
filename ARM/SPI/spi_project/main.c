 #include "header.h"
main(){
	unsigned int temp;
	float percent;
	spi0_init();
	uart0_init(9600);
	uart0_tx_string("MCP Testing... \r\n");

	while(1){
		temp = mcp3204_read(2);  // ch_num 2 ldr sensor
		percent = (float)(temp/4095)*100;
		while(percent >= 50.0f && percent <= 100.0f){
			uart0_tx_string("street light ON... \r\n");
			temp = mcp3204_read(2);  // ch_num 2
			percent = (temp/4095)*100;
		}
		while(percent >= 0.0f && percent <= 49.0f){
			uart0_tx_string("street light OFF... \r\n");
			temp = mcp3204_read(2);  // ch_num 2
			percent = (temp/4095)*100;
		}
		//uart0_tx_integer(temp);
		uart0_tx_string("\r\n");
		delay_ms(500);
	}
}

