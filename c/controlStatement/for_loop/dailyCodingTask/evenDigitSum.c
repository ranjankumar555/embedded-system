/*******************************************************************
9.WAP sum of even digit of given number.
[check digit is even or not using bitwise ]
Ex. i/p : 7722494 o/p : 12
*******************************************************************/

#include<stdio.h>
int main(){
	int num,sum=0,digit;
	printf("Enter number: ");
	scanf("%d", &num);
	while(num){
		digit = num%10;
		if((digit & 1) == 0){ // checkng odd and even using bitwise operator
			sum = sum + digit;
		}
		num = num/10;
	}
	printf("The sum of even digit of a number= %d\n",sum);
	return 0;
}
