#include<stdio.h>
int main()
{
int i=10,j=20,k=30,l;
l=(i=40)||(j=60)&&(k=80);
printf("i=%d j=%d k=%d l=%d\n",i,j,k,l);

return 0;
}
