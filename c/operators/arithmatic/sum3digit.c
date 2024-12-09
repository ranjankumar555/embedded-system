#include<stdio.h>
int main(){
	short int num; 
	printf("Enter three digit number: ");
	scanf("%hd", &num);
	int a=num%10;
	num/=10;
	int b = num%10;
	num/=10;
	int c = num%10;
	int sum = a+b+c;
	printf("The addition of three digit number is: %d\n", sum);
	return 0;
}
