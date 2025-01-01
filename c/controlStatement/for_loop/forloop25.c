#include<stdio.h>
void main(){
	int num;
	printf("Enter Number: ");
	scanf("%d", &num);
	for( ;num;num /= 10){
		int digit = num%10;
		if(digit %2 !=0){
			printf("1st odd digit from end= %d", digit);
			break;
		}
	}
	printf("\n");
}
