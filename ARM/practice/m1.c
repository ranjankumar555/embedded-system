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
		while(flag1) //3 led blink
		{
			IOSET0=ALL_LED;
			delay_ms(500);
			IOCLR0=ALL_LED;
			delay_ms(500);
		}
	
		while(sw2==0) //car indicator right
		{
			IOCLR0=ALL_LED;
			for(i=19;i>=17;i--)
			{
				IOSET0|=1<<i;
				delay_ms(50);
			}
			for(i=19;i>=17;i--)
			{
				IOCLR0|=1<<i;
				delay_ms(50);
			}
		}
		while(sw3==0) //car indicator left
		{
			IOCLR0=ALL_LED;
			for(i=17;i<=19;i++)
			{
				IOSET0|=1<<i;
				delay_ms(50);
			}
			for(i=17;i<=19;i++)
			{
				IOCLR0|=1<<i;
				delay_ms(50);
			}
		}

		
	}
}
