//1. WAP in C to print binary of integer number using for loop, while loop and goto .
#include<stdio.h>
int main(){
	short int num;
	printf("Enter the number: ");
	scanf("%hd", &num);
	for(int i=31; i>=0; i--)
		printf("%hd", num>>i&1);
	printf("\n");
	return 0;
}
