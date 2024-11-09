#include<stdio.h>
void main()
{
int i=2,j=3;
char k;
//printf("%ld\n",sizeof(i+j));   // 4
//printf("%ld\n",sizeof(k=i+j));  // 1

int a=5,b=3,c=0;

printf("c=%d\n",c);  // 0

printf("%ld\n",sizeof(c=a+b));   // 4

printf("c=%d\n",c);  // 0

}
