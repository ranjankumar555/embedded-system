#include<stdio.h>
void main(){
        int num, count=0;
        printf("Enter the number: ");
        scanf("%d", &num);
        int temp = num;
        //int digit;
        for(; num>0; num/=10){
			
               count++;
        }
        printf("The number of digit in %d is %d\n",temp,count);

}
