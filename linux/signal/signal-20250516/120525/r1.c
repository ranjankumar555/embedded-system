#include<stdio.h>
#include<sys/time.h>
#include<sys/resource.h>
void main()
{
struct rlimit v;
getrlimit(RLIMIT_STACK,&v);
printf("Stack: soft limit=%u, hard limit=%u\n", (int)v.rlim_cur, (int)v.rlim_max);
getrlimit(RLIMIT_CPU,&v);
printf("CPU time: soft limit=%u, hard limit=%u\n", (int)v.rlim_cur, (int)v.rlim_max);
getrlimit(RLIMIT_FSIZE,&v);
printf("File Size: soft limit=%u, hard limit=%u\n", (int)v.rlim_cur, (int)v.rlim_max);
getrlimit(RLIMIT_NPROC,&v);
printf("Number of Processes: soft limit=%u, hard limit=%u\n", (int)v.rlim_cur,(int)v.rlim_max);
getrlimit(RLIMIT_NOFILE,&v);
printf("Number of files: soft limit=%u, hard limit=%u\n", (int)v.rlim_cur,(int)v.rlim_max);
}
