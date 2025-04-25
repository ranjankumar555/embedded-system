#include "header.h"
#define sw1 ((IOPIN0>>14) & 1)
#define LED3 (1<<17)
unsigned char temp, flag, f2 = 0;
int f1, i;
char arr[10];

int main()
{	
	uart0_init(9600);
	//config_vic_for_uart0();
	//timer1_config();
	//config_vic_for_timer1();

	while(1){
		uart0_tx_str("Enter string: ");
		uart0_rx_str(arr, 10);
		uart0_tx_str("\r\n");
		uart0_tx_str(arr);
		uart0_tx_str("\r\n");
		}	
}

