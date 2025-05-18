#include<stdio.h>
#include<sys/resource.h>
#include<string.h>
#include<signal.h>
void my_isr(int n)
{
printf("In ISR %d %s\n", n, strsignal(n));
}
main()
{
struct sigaction s;
s.sa_handler=my_isr;
sigemptyset(&s.sa_mask);
s.sa_flags=SA_RESETHAND;
sigaction(SIGXCPU,&s,0);
struct rlimit v;
getrlimit(RLIMIT_CPU,&v);
v.rlim_cur=5;
setrlimit(RLIMIT_CPU,&v);
while(1);
}
