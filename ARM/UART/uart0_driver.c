#include<lpc21xx.h>
#define THRE ((U0LSR >>5) & 1) // txFlag
#define RDR (U0LSR & 1)		   // rxFlag

void uart0_tx(unsigned char data){
	U0THR = data;	  //assign data
	while(THRE == 0); //txflag monitoring

}
void uart0_tx_str(char* str){
	while(*str){
		U0THR = *str;
		while(THRE == 0);
		str++;
	}
}
unsigned int uart0_rx(void){
 	 while(RDR == 0);
	 return U0RBR;
}
void uart0_rx_str(char *arr, unsigned int len){
	int i;
	for(i=0; i<len; i++){
		while(RDR == 0);
		arr[i] = U0RBR;
		U0THR = arr[i]; 					// loopback
		while(THRE == 0);
		if(arr[i] == 8){
			arr[i-1] = '\0';
			i -= 2;
		}
		if(arr[i]=='\r' || arr[i] == ' ')
		{
			break;
		}
	}
	arr[i] = '\0';
}
int str_int(const char* str){
	int i, num=0;
	for(i = 0; str[i]; i++){
		if(str[i] >= '0' && str[i] <= '9'){
			num = num*10 + (str[i] - 48);
		}
		else{
			break;
		}
	}
	return num;
}
void int_str(char * str, int num){
	int i =0, rev=0;
	while(num){
	rev = rev*10 + num%10;
	num /= 10;
	}
	while(rev)
	{	   
		 str[i++] = rev%10 + 48;
		 rev /= 10;
	}
	str[i] = '\0';
}

void uart0_init(unsigned int baudrate){ //baudrate setting
	int pclk[4] = {15000000, 60000000, 30000000, 15000000};	// 15 * 10pow6 for mhz.
	int result =0;
	PINSEL0 |= 0X5;
	U0LCR = 0x83; //8N1 and DLAB = 1 -> baudrate setting unlocked;
	
	result = pclk[VPBDIV%4]/(16*baudrate);
	U0DLL = result&0xFF;
	U0DLM = result>>8;

	U0LCR = 0X3; //DLAB = 0 ->baudrate setting locked means tx and rx flag is accessible.

}
