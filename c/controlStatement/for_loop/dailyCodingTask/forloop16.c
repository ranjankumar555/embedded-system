#include<stdio.h>
void main(){
	int num, rev=0;
	printf("Enter the number: ");
	scanf("%d", &num);
	
	for( ;num>0; num/=10){
		rev = rev*10 + num%10;


	}
	printf("Number after reverse: %d\n", rev);
}
