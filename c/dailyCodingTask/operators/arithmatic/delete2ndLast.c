#include<stdio.h>
int main(){
	unsigned int num;
	printf("Enter any number: ");
	scanf("%u",&num);
	short int a= num%10;
	num/=100;
	//short int b = num%10;
       	//num/=10;
	num = num*10 + a;
	printf("Number after deleting second last digit: %u\n", num);
	return 0;
}

