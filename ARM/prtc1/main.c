#include"header.h"
int flag1=0, flag2=0, flag3=0;
unsigned char temp;
main()
{
	int i;
	uart0_init(9600);
	config_vic_for_intrpt123();
	IODIR0|=(7<<17);
	while(1){
		while(flag1) //1 led blink
		{   flag1 = 0;
			IOSET0=LED1;
			delay_ms(500);
			IOCLR0=LED1;
			delay_ms(500);
		}
	
		while(flag2) //car indicator right
		{   flag2 = 0;
			IOCLR0=ALL_LED;
			for(i=19;i>=17;i--)
			{
				IOSET0|=1<<i;
				delay_ms(500);
			}
			for(i=19;i>=17;i--)
			{
				IOCLR0|=1<<i;
				delay_ms(500);
			}
		}
		while(flag3) //car indicator left
		{
            flag3 = 0;
			IOCLR0=ALL_LED;
			for(i=17;i<=19;i++)
			{
				IOSET0|=1<<i;
				delay_ms(500);
			}
			for(i=17;i<=19;i++)
			{
				IOCLR0|=1<<i;
				delay_ms(500);
			}
		}

		
	}
}
