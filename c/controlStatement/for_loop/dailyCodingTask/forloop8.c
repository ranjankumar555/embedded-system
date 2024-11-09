#include<stdio.h>
void main(){
        int num, count=0;
        printf("Enter the number: ");
        scanf("%d", &num);
        int temp = num;
        int digit;
        for(; num>0; num/=10){
                digit = num%10;
                if(digit%2==0 && digit >4){
                        count++;
                }
        }
        printf("The even digit greater than 4 in %d is %d\n",temp,count);

}
