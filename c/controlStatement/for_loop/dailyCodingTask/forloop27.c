#include<stdio.h>
void main(){
	int num,digit,rev;
	printf("Enter Number: ");
	scanf("%d", &num);
	
	int ld = num%10;
	for( rev =0; num>0; num /=10){
		rev = rev*10 + num%10;
	}
	int fd = rev%10;
	printf("Sum of First and last digit: %d\n", fd + ld);
	}
