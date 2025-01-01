#include<stdio.h>
void main(){
        int num, sum=0, count =0;
        printf("Enter the number: ");
        scanf("%d", &num);
        int temp = num;
        int digit;
        for(; num>0 && count<3; num/=10){
                digit = num%10;
		printf("%d ", digit);
                count++;
                }
        
        printf("Last three digit printed successfully");

	}

