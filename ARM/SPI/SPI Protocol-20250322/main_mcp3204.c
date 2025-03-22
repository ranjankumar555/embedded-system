#include "header.h"
main(){
	u32 temp;
	spi0_init();
	uart0_init(9600);
	uart0_tx_string("MCP3204 Testing\r\n");
	while(1){
		temp=mcp3204_read(2);//ch_num
		uart0_tx_integer(temp);
		uart0_tx_string("\r\n");
	}
}