#include<stdio.h>
void main(){
        int num, count=0;
        printf("Enter the number: ");
        scanf("%d", &num);
        int temp = num;
        int digit;
        for(; num>0; num/=10){
                digit = num%10;
                if(digit>=1 && digit<7 && digit%2 == 0){
                        count++;
                }
        }
        printf("The even digit b/w 1 and 7 in %d is %d\n",temp,count);

}
