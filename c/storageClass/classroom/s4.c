#include<stdio.h>
int *abc(void);
static int i=20;
void main()
{
static int i=10;
int *p;
p=abc();
printf("*p=%d\n",*p);

}
int * abc(void)
{
return &i;

}
