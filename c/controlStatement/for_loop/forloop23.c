#include<stdio.h>
void main(){
        int num,digit, sum = 0, rev=0;
        printf("Enter the number: ");
        scanf("%d", &num);
	
	int count = 0;
        for( ;num>0 && count<1; num/=10){
		count++;
        }
	printf("2nd last digit is %d\n", num%10);
}
