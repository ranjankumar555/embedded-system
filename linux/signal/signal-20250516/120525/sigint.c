#include"header.h"
void my_isr(int n)
{
printf("In isr pid=%d n=%d\n",getpid(),n);

}
void main()
{
printf("Hello pid=%d\n",getpid());
//signal(SIGINT,my_isr);
struct sigaction v;
v.sa_handler=my_isr;//SIG_IGN,SIG_DFL
sigemptyset(&v.sa_mask);
v.sa_flags=0;
sigaction(2,&v,0);

printf("Hai...\n");
while(1);


}
