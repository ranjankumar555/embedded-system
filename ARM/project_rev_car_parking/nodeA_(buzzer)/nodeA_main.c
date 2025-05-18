#include <LPC21xx.H>
#include"headerb.h"
#define LED (1<<17)
#define BUZ (1<<21)
u32 flag=0,flag1=0;
can1 c;
main()
{
  can1_init();
	uart0_init(9600);
	config_VIC_for_EINT0();
	config_EINT0();
	config_vic_for_can1rx();
	IODIR0|=LED;
	IODIR0|=BUZ;
	IOSET0|=LED;
	while(1)
	{

		if(flag==1)
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
			}
			else if(c.byteA<=50&&c.byteA!=0&&flag1==1)
			{
				IOSET0|=BUZ;
				flag1=0;
				uart0_integer(c.byteA);
				uart0_tx_string("cm\r\n");
			}
		}
		else{
			IOSET0|=LED;
		}
	}
}

