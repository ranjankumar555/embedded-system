/***************************************************************************
 *5.WAP in C to print sum of first n natural number.
 * ************************************************************************/
#include<stdio.h>
void main(){
	int n;
	printf("Enter the number: ");
	scanf("%d", &n);
	int sum =0;
	for(int i=1; i<=n; i++){
		sum += i;
	}
	printf("The sum of 1st %d natural number is %d\n",n,sum);
}
