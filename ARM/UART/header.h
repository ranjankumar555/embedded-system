#ifndef _HEADER_H
#define _HEADER_H
#include<lpc21xx.h>
extern void delay_ms(unsigned char ms);
extern void delay_ms(unsigned char sec);
extern void config_vic_for_timer1(void);
extern void timer1_config(void);


extern void lcd_cgram(void);
extern void lcd_str(char* p);
extern void lcd_data(unsigned char data);
extern void lcd_cmd(unsigned char cmd);
extern void lcd_init(void);

extern void uart0_tx(unsigned char data);
extern unsigned int uart0_rx(void);
extern void uart0_rx_str(char *arr, unsigned int len);
extern void uart0_tx_str(char* str);
extern void uart0_init(unsigned int baudrate);

extern void adc_init(void);
extern unsigned int adc_read(unsigned char ch_num);

extern void config_vic_for_uart0(void);
extern void config_vic_for_eint0(void);

extern int str_int(const char* str);
extern void int_str(char * str, int num);

#endif
