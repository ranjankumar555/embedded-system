#include"header.h"
void my_isr(int n)
{
printf("In isr pid=%d n=%d\n",getpid(),n);
}
void main()
{
printf("Hello pid=%d\n",getpid());
//signal(2,SIG_IGN);
signal(SIGINT,my_isr);
signal(SIGQUIT,my_isr);
printf("Hai...\n");
while(1);
}
