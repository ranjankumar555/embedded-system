#include<stdio.h>
void main()
{
int i=9,j=15,k=3,r;

//r = i>j ? (i>k ? i : k) : (j>k ? j : k) ;
//r = i>j ? exp1 : exp2;

r = i>j ? i>k ? i: k : j>k ? j: k;




printf("r=%d\n",r);
}
