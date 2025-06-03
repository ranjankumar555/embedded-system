#include"header.h"

void main()
{
//int fd=dup(1);
int fd=dup2(1,9);
printf("fd=%d\n",fd);
write(fd,"Hello",5);



}
