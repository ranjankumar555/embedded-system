#include <lpc21xx.h>
extern void delay_ms(unsigned int ms);
extern void led_blink(void);
extern void uart_data(unsigned char data);
extern void uart_str(char *);
extern void lcd_data(unsigned char data);
extern void lcd_init(void);
extern void lcd_cmd(unsigned char cmd);
extern void lcd_str(unsigned char* p);
extern int delay_sec(const unsigned int sec);
#define sw1 (((IOPIN0>>11)&1))
