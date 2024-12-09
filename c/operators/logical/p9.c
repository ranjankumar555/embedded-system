#include<stdio.h>
void main()
{
char ch=256;
int i=10,k;
unsigned int j=2;
k=(ch==0)&&(j<-1)||(i=50);
printf("%d %d",i,k);
}
