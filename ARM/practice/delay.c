#include<lpc21xx.h>
#include "header.h"
void delay_ms(unsigned int ms){
	T0TC = 0;
	T0PR = 15000 - 1;
	T0PC = 0;
	T0TCR = 1;
	while(T0TC<ms);
	T0TCR = 0;
}

int delay_sec(const unsigned int sec){
	unsigned int c = 0;
	T0TC = 0;
	T0PR = 15000000 - 1;
	T0PC = 0;
	T0TCR = 1;
	while(T0TC<sec){
		if(sw1 == 0){
			while(sw1 == 0);
			c++;
			
		}
	}
	T0TCR = 0;
	return c;
}
