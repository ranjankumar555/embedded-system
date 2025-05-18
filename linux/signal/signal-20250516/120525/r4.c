#include<stdio.h>
#include<sys/resource.h>
main()
{
struct rlimit v;
getrlimit(RLIMIT_CORE,&v);
printf("CORE FILE SIZE: soft limit=%u, hard limit=%u\n", (int)v.rlim_cur, (int)v.rlim_max);
v.rlim_cur=10000;
setrlimit(RLIMIT_CORE,&v);
getrlimit(RLIMIT_CORE,&v);
printf("CORE FILE: soft limit=%u, hard limit=%u\n", (int)v.rlim_cur, (int)v.rlim_max);
while(1);
}
