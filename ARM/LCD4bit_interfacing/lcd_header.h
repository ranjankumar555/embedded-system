#ifndef _LCD_HEADER_H
#define _LCD_HEADER_H

void lcd_data(unsigned char data);
void lcd_cmd(unsigned char cmd);
void lcd_init(void);
void delay_ms(unsigned int ms);
void delay_sec(unsigned int sec);
void lcd_str(unsigned char* p);
#endif
