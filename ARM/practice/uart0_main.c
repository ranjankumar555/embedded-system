#include "header.h"

void uart_data(unsigned char data){

/* 1. UART0 Initialization */
	PINSEL0 = PINSEL0 | 0X5;

	U0LCR = 0X83;
	U0DLL = 97;
	U0DLM = 0;
	U0LCR = 0X03;
/* 2. sending the data frame */
	U0THR = data;
	while(((U0LSR>>5)&1) == 0);
}

