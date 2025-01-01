#include<stdio.h>
void main(){
	int num,digit, count = 0, rev=0;
	printf("Enter the number: ");
	scanf("%d", &num);
	
	for( ;num>0 && count<2; num/=10, count++){
		digit = num%10;
		rev = rev*10 + num%10;


	}
	printf("Number after reverse of last2 digit: %d\n", rev);		
}
