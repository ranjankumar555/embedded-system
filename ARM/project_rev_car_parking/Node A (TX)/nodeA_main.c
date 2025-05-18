#include <LPC21xx.H>
#include"headerb.h"
#define LED (1<<17)
#define BUZ (1<<21)
u32 extflag=0,flag1=0;
can1 c;
main()
{
	lcd_init();
  	can1_init();
	uart0_init(9600);
	config_VIC_for_EINT0();
	config_vic_for_can1rx();
	IODIR0|=LED;
	IODIR0|=BUZ;
	IOSET0|=LED;
	while(1)
	{

		if(extflag==1)
		{
			IOCLR0|=LED;
			if(c.byteA>=300&&c.byteA<=400&&flag1==1)
			{
				IOSET0|=BUZ;
				delay_sec(1);
				IOCLR0|=BUZ;
				delay_sec(1);
				flag1=0;
				uart0_integer(c.byteA);
				uart0_tx_string("cm\r\n");
				lcd_cmd(0x80);
				lcd_str("r_gear applied");
				lcd_cmd(0x40);
				lcd_str("Dist: ");
				lcd_integer(c.byteA);
				lcd_cmd(0x01);
			}
			else if(c.byteA>=200&&c.byteA<=299&&flag1==1)
			{
				IOSET0|=BUZ;
				delay_ms(500);
				IOCLR0|=BUZ;
				delay_ms(500);
				flag1=0;
				uart0_integer(c.byteA);
				uart0_tx_string("cm\r\n");
				lcd_cmd(0x80);
				lcd_str("r_gear applied");
				lcd_cmd(0x40);
				lcd_str("Dist: ");
				lcd_integer(c.byteA);
				lcd_cmd(0x01);
			}
			else if(c.byteA>=100&&c.byteA<=199&&flag1==1)
			{
				IOSET0|=BUZ;
				delay_ms(100);
				IOCLR0|=BUZ;
				delay_ms(100);
				flag1=0;
				uart0_integer(c.byteA);
				uart0_tx_string("cm\r\n");
				lcd_cmd(0x80);
				lcd_str("r_gear applied");
				lcd_cmd(0x40);
				lcd_str("Dist: ");
				lcd_integer(c.byteA);
				lcd_cmd(0x01);
			}
			else if(c.byteA>=50&&c.byteA<=99&&flag1==1)
			{
				IOSET0|=BUZ;
				delay_ms(75);
				IOCLR0|=BUZ;
				delay_ms(75);
				flag1=0;
				uart0_integer(c.byteA);
				uart0_tx_string("cm\r\n");
				lcd_cmd(0x80);
				lcd_str("r_gear applied");
				lcd_cmd(0x40);
				lcd_str("Dist: ");
				lcd_integer(c.byteA);
				lcd_cmd(0x01);
			}
			else if(c.byteA<=50&&c.byteA!=0&&flag1==1)
			{
				IOSET0|=BUZ;
				flag1=0;
				uart0_integer(c.byteA);
				uart0_tx_string("cm\r\n");
				lcd_cmd(0x80);
				lcd_str("stop car");
				lcd_cmd(0x40);
				lcd_str("Dist: ");
				lcd_integer(c.byteA);
				lcd_cmd(0x01);
			}
		}
		else{
			IOSET0|=LED;
			lcd_str("apply R_gear");
			delay_ms(250);
			lcd_cmd(0x01);
			
		}
	}
}

