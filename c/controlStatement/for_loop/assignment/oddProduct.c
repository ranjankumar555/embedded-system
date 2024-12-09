/***********************************************************************
 *WAP in C to find product of odd digit using for loop.
 * ********************************************************************/
#include<stdio.h>
int main(){
	int num, p = 1;
	printf("Enter the number: ");
	scanf("%d", &num);
	int digit;
	for( ; num; num/=10){
		digit = num%10;
		if(digit & 1 == 1){ // check digit is odd or not.
			p = p*digit;
		}
	}
	printf("Product of odd digit = %d\n", p);
	
	return 0;
}

