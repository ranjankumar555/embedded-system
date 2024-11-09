#include<stdio.h>
void main()
{
int i=4,j=5,k;

//k = i<j ? 100 : 200 ;
//i<j ? k=100 : k=200 ;  // error
i<j ? k=100 : (k=200) ;

printf("k=%d\n",k);    // k=100

}
