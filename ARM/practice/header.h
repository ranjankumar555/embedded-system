#include<lpc21xx.h>
#ifndef _HEADER_H
#define _HEADER_H

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
extern int uart0_rx_integer();
extern float uart0_rx_float();

extern void config_vic_for_uart0(void);
extern void ext_uart0_intrpt(void);
extern 
#endif
