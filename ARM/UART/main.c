//#include "header.h"
//#define sw1 ((IOPIN0>>14) & 1)
//#define LED3 (1<<19)
//unsigned char temp, flag, f1 = 0;
//main()
//{
//
//	IODIR0 |= LED3;
//	config_vic_for_eint0();
//	//config_vic_for_uart0();
//	uart0_init(9600);
//	uart0_tx_str("EINT0...\r\n");
//
//	while(1){
//		  if(sw1 == 0){
//		  	while(sw1==0);
//				f1 ^= 1;
//				if(f1)
//					IOSET0 = LED3;
//				else
//					IOCLR0 = LED3;
//		   }
//	}	
//}
