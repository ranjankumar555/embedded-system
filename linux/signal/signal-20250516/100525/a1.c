#include"header.h"
void my_isr(int n)
{
printf("In isr...\n");
alarm(2);

}
void main()
{
printf("Hello... pid=%d\n",getpid());
signal(14,my_isr);
alarm(10);
printf("Hai ...\n");
while(1);

}
