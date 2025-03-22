#include "header.h"
#define sw (IOPIN0 & (1<<15))
main(){
	   //int num1, num2, op, res, space, enter;
	   char s1[50], s2[10], ans[10];
	   
	   uart0_init(9600);
	   
	   while(1){
	   	uart0_rx_str(s1, 10);
		
		/*
		switch(op){
			case '+':  	res = num1 + num2;
						int_str(ans, res);
						uart0_tx_str("\r\n");
						uart0_tx_str("output: ");
						uart0_tx_str(ans);
						uart0_tx_str("\r\n");
						break;
			case '-':	res = num1 - num2;
						int_str(ans, res);
						uart0_tx_str("\r\n");
						uart0_tx_str("output: ");
						uart0_tx_str(ans);
						uart0_tx_str("\r\n");
						break;
			case '*':  res = num1 * num2;
						int_str(ans, res);
						uart0_tx_str("\r\n");
						uart0_tx_str("output: ");
						uart0_tx_str(ans);
						uart0_tx_str("\r\n");
						break;
			case '/':  	res = num1 / num2;
						int_str(ans, res);
						uart0_tx_str("\r\n");
						uart0_tx_str("output: ");
						uart0_tx_str(ans);
						uart0_tx_str("\r\n");
						break;
			default: 
					uart0_tx_str("invalid input");

		}
*/
}
}
