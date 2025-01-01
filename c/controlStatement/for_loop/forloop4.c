#include<stdio.h>
void main(){
        int num, sum=0;
        printf("Enter the number: ");
        scanf("%d", &num);
        int temp = num;
        int digit;
        for(; num>0; num/=10){
                digit = num%10;
                if(digit<7){
                        sum+=digit;
                }
        }
        printf("The sum of digit less than 7 in %d is %d\n",temp,sum);

}
