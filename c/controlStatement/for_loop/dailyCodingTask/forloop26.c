#include<stdio.h>
void main(){
	int num,digit,rev;
	printf("Enter Number: ");
	scanf("%d", &num);

	for( rev =0; num>0; num /=10){
		rev = rev*10 + num%10;
	}
	for( ;rev; rev = rev/10){
		digit = rev%10;
		if(digit%2!=0){
			printf("First odd digit from start: %d\n", digit);
			break;
		}
	}
	}
