#include<stdio.h>
void main(){
	int num, sum = 0;
	printf("Enter number: ");
	scanf("%d", &num);
	while(num){
		sum += num%10;
		num /=10;
	}
	printf("sum = %d\n",sum);
}
