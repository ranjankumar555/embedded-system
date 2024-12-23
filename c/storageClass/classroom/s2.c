#include<stdio.h>
void abc(void);
static int i=10;
void main()
{
static int i=20;

printf("i=%d\n",i);
abc();
}
void abc(void)
{
printf("i in abc=%d\n",i);

}
