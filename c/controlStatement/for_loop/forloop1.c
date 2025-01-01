#include<stdio.h>
void main(){
	int num, sum =0;

	printf("Enter the Number: ");
	scanf("%d", &num);
	int temp = num;
	for( ;num>0; num/=10)
	{
		sum = sum+ num%10;
	}
	printf("the the sum of digit in %d is %d\n", temp, sum);
}

