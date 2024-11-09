#include<stdio.h>
void main()
{
int i=10;
char ch='a';
float f=23.5;
double d=45.67;

printf("%ld %ld %ld\n",sizeof(int),sizeof(i),sizeof(20));
printf("%ld %ld %ld\n",sizeof(char),sizeof(ch),sizeof('a'));
printf("%ld %ld %ld\n",sizeof(float),sizeof(f),sizeof(24.7f));
printf("%ld %ld %ld\n",sizeof(double),sizeof(d),sizeof(4.5));
printf("%ld\n",sizeof("abcd"));

}
