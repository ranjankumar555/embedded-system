#include<stdio.h>
void abc(void);
void main()
{
abc();
abc();
abc();
}
void abc(void)
{
static  int i=10;
i++;
printf("i=%d\n",i);

}
