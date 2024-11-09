#include<stdio.h>
void main()
{
int i=5,j=6,k;

//k= i && j;    // k=1

//k= i && j=200;     // error

i=0;

k= i && (j=200) ;    // i=0 , j=6, k=0

                     // if i=5
		     // i=5 ,  j=200 , k=1

printf("i=%d j=%d k=%d\n",i,j,k);
}







