#include<lpc21xx.h>
#include "header.h"

#define DONE ((ADDR>>31)&1)

void adc_init(void){
	
	PINSEL1 |= 0x15400000;
	ADCR = 0x00200400;
}

unsigned int adc_read(unsigned char ch_num){
	unsigned int result = 0;
	/* 1. Select channel number */
	ADCR |= (1<<ch_num);
	/* 2. start adc */
	ADCR |= (1<<24);
	/* 3. wait for A/D conversion to complete */
	while(DONE == 0);
	/* 4. stop adc */
	ADCR ^= (1<<24);
	/* 5. diselect channel Number */
	ADCR ^= (1<<ch_num);
	/* 6. extract result */
	result = (ADDR>>6)&0x3FF;
	/* 7. return result */
	return result;

}
