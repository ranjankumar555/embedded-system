#include<stdio.h>
void main()
{
char ch=321,ch1=322,ch2=325,ch3=323,ch4=324,l;
l=(ch=0)&&(ch1='0')||(ch2='1')&&(ch3='3')&&(ch4=0);
printf("ch=%d ch1=%d ch2=%d ch3=%d ch4=%d l=%d",ch,ch1,ch2,ch3,ch4,l);
}
