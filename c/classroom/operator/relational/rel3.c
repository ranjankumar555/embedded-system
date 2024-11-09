#include<stdio.h>
void main()
{

int i=1,j=2,k=3,l=1,m=2;

m=i>j!=k<=i<k==l;

// m=0!=k<=i<k==l;    >

// m=0!=0<k==l;    <=

// m=0!=1==l;   <

// m=1==l;    !=

//  m=1;    ==

printf("i=%d j=%d k=%d m=%d l=%d\n",i,j,k,m,l);



}
