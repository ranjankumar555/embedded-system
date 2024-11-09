#include<stdio.h>
int main(){
	int n;
	printf("Enter the number: ");
	scanf("%d", &n);
	int first_digit = n%10;
	n=n/10;
	int second_digit = n%10;
	
	//performing addition operation
	int sum =  first_digit + second_digit;
	printf("the sum of %d and %d is %d\n",second_digit,first_digit,sum);
	return 0;
}
	
