#include"header.h"
#define LED1 (1<<17)
#define LED2 (1<<18)
#define LED3 (1<<19)
#define ALL_LED (7<<17);
#define sw ((IOPIN0>>14)&1)
#define sw1 ((IOPIN0>>14)&1)
#define sw2 ((IOPIN0>>15)&1)
#define sw3 ((IOPIN0>>16)&1)
unsigned int flag1=0, flag2=0, flag3=0;
unsigned char temp;
main()
{
	int i;
	uart0_init(9600);
	config_vic_for_uart0();
	config_vic_for_eint0();
	
	while(1){
		while(flag1)//3 led blink
		{
			IOSET0=ALL_LED;
			delay_ms(50);
			IOCLR0=ALL_LED;
			delay_ms(50);
		}
	
		while(sw2==0)//car indicator right
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
		while(flag3)//car indicator left
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
