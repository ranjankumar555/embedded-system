//#include "header.h"
//#define sw1 ((IOPIN0>>14) & 1)
//#define LED3 (1<<19)
//unsigned char temp, flag, f2 = 0;
//int f1;
//char arr[10];
//void my_strcpy(char *d, char* s);
//int my_strcmp(const char* str1, const char* str2);
//
//main()
//{
//
//	//config_vic_for_eint0();
//	char s1[20], s2[20];
//	config_vic_for_timer1();
//	timer1_config();
//	config_vic_for_uart0();
//	uart0_init(9600);
//	uart0_tx_str("Check string equal or not...\r\n");
//
//	while(1){
//		
//		 if(f1){
//		 	f1 = 0;
//			uart0_tx_str("Enter string1: ");
//			while(f1==0);
//		 }
//		 uart0_tx_str("\r\n");
//		 uart0_tx_str(arr);
//		 my_strcpy(s1, arr);
//		 uart0_tx_str("\r\n");
//		 if(f1){
//		 	f1 = 0;
//			uart0_tx_str("Enter string2: ");
//			while(f1==0);
//		 }
//		 uart0_tx_str("\r\n");
//		 uart0_tx_str(arr);
//		 my_strcpy(s2, arr);
//		 if(my_strcmp(s1,s2) == 0){
//		   uart0_tx_str("String equal\r\n");
//		 }
//		 else{
//		 	uart0_tx_str("String not equal\r\n")
//		 } 
//		 uart0_tx_str("\r\n");
//	}	
//}
//void my_strcpy(char *d, char* s){
//	while(*s){
//		*d++ = *s++;
//	}
//	*d = '\0';
//}
//int my_strcmp(const char* str1, const char* str2){
//  while(*str1){
//    if(*str1 != *str2){
//        return *str1 - *str2;
//    }
//    str1++;
//    str2++;
//  }
//  return *str1 - *str2;
//}