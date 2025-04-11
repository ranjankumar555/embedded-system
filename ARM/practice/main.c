#include"header.h"
#define LED1 (1<<17)
#define LED2 (1<<18)
#define LED3 (1<<19)
#define sw ((IOPIN0>>14)&1)
#define sw1 ((IOPIN0>>14)&1)
#define sw2 ((IOPIN0>>15)&1)
#define sw3 ((IOPIN0>>16)&1)
unsigned char temp;
main()
{
int i,j,flag;
uart0_init(9600);
config_vic();
en_uart0_interrupt();
IODIR0=0XFF;
IOCLR0=0XFF;
IODIR0|=(7<<17);
while(1)
{
while(temp=='a')//8 led blink
{
IOSET0=0XFF;
delay_ms(50);
IOCLR0=0XFF;
delay_ms(50);
}
while(temp=='b')//1 led blink
{
IOSET0=0X1;
delay_ms(50);
IOCLR0=0X1;
delay_ms(50);
}
while(temp=='c')//led shift left
{
for(i=0;i<8;i++)
{
IOSET0=1<<i;
delay_ms(50);
IOCLR0=1<<i;
delay_ms(50);
}
}
while(temp=='d')//led shift right
{
for(i=7;i>=0;i--)
{
IOSET0=1<<i;
delay_ms(50);
IOCLR0=1<<i;
delay_ms(50);
}
}
while(temp=='e')//car indicator right
{
IOCLR0=0XFF;
for(i=7;i>=0;i--)
{
IOSET0|=1<<i;
delay_ms(50);
}
for(i=7;i>=0;i--)
{
IOCLR0|=1<<i;
delay_ms(50);
}
}
while(temp=='f')//car indicator left
{
IOCLR0=0XFF;
for(i=0;i<8;i++)
{
IOSET0|=1<<i;
delay_ms(50);
}
for(i=0;i<8;i++)
{
IOCLR0|=1<<i;
delay_ms(50);
}
}
while(temp=='g')//binary print 0 to 7
{
IOCLR0=7<<17;
for(i=0;i<8;i++)
{
IOSET0=i<<17;
delay_ms(50);
IOCLR0=i<<17;
delay_ms(50);
}
}
while(temp=='h')//conversion and diversion
{
IOCLR0=0XFF;
for(i=0,j=7;i<j;i++,j--)
{
IOSET0|=(1<<i)|(1<<j);
delay_ms(50);
}
for(i,j;i>=0;i--,j++)
{
IOCLR0|=(1<<i)|(1<<j);
delay_ms(50);
}
}
while(temp=='i')//while swwitch is pressend led blink and released led off
{
if(sw==0)
{
IOSET0=LED1;
delay_ms(50);
IOCLR0=LED1;
delay_ms(50);
}
else
IOCLR0=LED1;
}
while(temp=='j')//toggle led when switch is pressed
{
flag=0;
if(sw==0)
flag=!flag;
if(flag)
IOSET0=LED1;
else
IOCLR0=LED1;
}
while(temp=='k')//binary print using switch
{
IOSET0=i<<17;
while(sw==0)
{
while(sw==0);
IOCLR0=i<<17;
i++;
}
if(i>7)
i=0;
}
while(temp=='l')//3 switch 3 led
{
if(sw1==0)
IOSET0=LED1;
if(sw2==0)
IOSET0=LED2;
if(sw3==0)
IOSET0=LED3;
else
IOCLR0=LED1|LED2|LED3;
}
}
}