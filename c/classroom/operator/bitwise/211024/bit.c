#include<stdio.h>
void main()
{
int i=100,j=150,k;

k=i&j;
printf("k=%d\n",k);

k=i|j;
printf("k=%d\n",k);

k=i^j;
printf("k=%d\n",k);

k=~i;
printf("k=%d\n",k);

}

