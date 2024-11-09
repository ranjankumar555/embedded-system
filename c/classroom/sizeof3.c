#include<stdio.h>
void main()
{
int i=5;
double d=1.5;

printf("%ld\n",sizeof(i+d));   // 8

char ch1='a',ch2='b';

printf("%ld\n",sizeof(ch1+ch2));  // 4
printf("%ld\n",sizeof(ch1>ch2));  // 4
}
