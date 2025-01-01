#include<stdio.h>
void main(){
        int num, sum=0;
        printf("Enter the number: ");
        scanf("%d", &num);
        int temp = num;
        int digit;
        for(; num>0; num/=10){
                digit = num%10;
                if(digit>5){
                        sum+=digit;
                }
        }
        printf("The sum of digit greater than 5 in %d is %d\n",temp,sum);

}
