#include<stdio.h>
void main()
{
//unsigned int i=2,j=3000000000,k;
//unsigned int i=2,j=3000000000;
/*unsigned int i=2;
unsigned long int k,j=3000000000;

k=i*j;
printf("k=%lu\n",k);
*/

unsigned int i=2,j=3000000000;
unsigned long int k;
k=(unsigned long int) i*j;
printf("k=%lu\n",k);



}
