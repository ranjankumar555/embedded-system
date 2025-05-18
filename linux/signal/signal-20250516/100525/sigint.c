#include"header.h"
void my_isr(int n)
{
static int i;
printf("In isr pid=%d n=%d\n",getpid(),n);
i++;
if(i==3)
signal(n,SIG_DFL);
}
void main()
{
printf("Hello pid=%d\n",getpid());
//signal(2,SIG_IGN);
signal(SIGINT,my_isr);
printf("Hai...\n");
while(1);
}
