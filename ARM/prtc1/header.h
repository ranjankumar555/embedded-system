#include<lpc21xx.h>
#ifndef _HEADER_H
#define _HEADER_H
#define LED1 (1<<17)
#define LED2 (1<<18)
#define LED3 (1<<19)
#define ALL_LED (7<<17);
#define sw ((IOPIN0>>14)&1)
#define sw1 ((IOPIN0>>14)&1)
#define sw2 ((IOPIN0>>15)&1)
#define sw3 ((IOPIN0>>16)&1)

extern void delay_ms(unsigned int ms);
extern void delay_ms(unsigned int ms);

extern void lcd_data(unsigned char data);  // 8bit and 4bit function are same...
extern void lcd_cmd(unsigned char cmd);
extern void lcd_init(void);
extern void lcd_str(char *p);
extern void lcd_cgram(void);

extern void uart0_init(unsigned int baud);
extern void uart0_tx_data(unsigned char data);
extern unsigned char uart0_rx_data(void);
extern void uart0_tx_string(char *p);
extern void uart0_rx_string(char *p,unsigned int len);
extern void uart0_tx_integer(int num);
extern void uart0_tx_float(float f);
extern void uart0_tx_hex(int num);
extern int uart0_rx_integer(void);
extern float uart0_rx_float(void);

extern void config_vic_for_intrpt123(void);
extern unsigned char temp; 
#endif


