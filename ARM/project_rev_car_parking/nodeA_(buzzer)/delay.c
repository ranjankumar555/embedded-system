#include<lpc21xx.h>
#include"headerb.h"
void delay_sec(unsigned int sec)
{
   T0PC=0;
   T0PR=60000000-1;
   T0TC=0;
   T0TCR=1;
   while(T0TC<sec);
   T0TCR=0;
}
void delay_ms(unsigned int ms)
{
   T0PC=0;
   T0PR=60000-1;
   T0TC=0;
   T0TCR=1;
   while(T0TC<ms);
   T0TCR=0;
}
