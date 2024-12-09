/*******************************************************
  1.WAP in C to find sum of digits using goto.
*******************************************************/
#include<stdio.h>
int main(){
	int num,sum =0;
	printf("Enter the number: ");
	scanf("%d", &num);

L1:
	sum = sum + num%10;
	num=num/10;
	if(num){
		goto L1;
	}
	printf("The sum of digits = %d\n", sum);
	return 0;
}	
