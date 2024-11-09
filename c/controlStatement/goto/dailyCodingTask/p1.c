#include<stdio.h>
void main(){
	int num, digit, count =0;
	printf("Enter Number: ");
	scanf("%d", &num);
	int temp = num;
L7:
	digit = num%10;
	if(digit%2!=0){
		count++;
	}
	num/=10;
	if(num>0){
		goto L7;
	}
	
	printf("The number of odd digit in %d is: %d\n", temp, count);

}
