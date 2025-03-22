#include "header.h"
#define sw (IOPIN0 & (1<<15))
main(){
	int op =0;
	int temp;
	IODIR0 = 0x7<<17;
	uart0_init(9600);
	while(1){
		uart0_tx_str("a. LED1 ON \r\n");
		uart0_tx_str("b. LED1 OFF \r\n");

		uart0_tx_str("c. LED2 ON \r\n");
		uart0_tx_str("d. LED2 OFF \r\n");

		uart0_tx_str("e. Both LED ON \r\n");
		uart0_tx_str("f. Both LED OFF \r\n");

		uart0_tx_str("Enter choice: ");
		op = uart0_rx_data();
		uart0_tx_data(op);
		
		temp = uart0_rx_data();
		while(temp != '\r');
		uart0_tx_str("\r\n");

		switch(op){
			case 'a': IOCLR0 = 1<<17; break;
			case 'b': IOSET0 = 1<<17; break;

			case 'c': IOCLR0 = 1<<18; break;
			case 'd': IOSET0 = 1<<18; break;

			case 'e': IOCLR0 = 0x3<<17; break;
			case 'f': IOSET0 = 0X3<<17; break;

			default: uart0_tx_str("Unknown choice!!!\r\n");
		 }
	}
}
