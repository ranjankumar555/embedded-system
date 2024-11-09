#include<stdio.h>
void main(){
        int num, sum=0, count =0;
        printf("Enter the number: ");
        scanf("%d", &num);
        int temp = num;
        int digit;
        for(; num>0 && count<3; num/=10){
                digit = num%10;
                if(digit%2 !=0 ){
                        sum+=digit;
			count++;
                }
        }
        printf("The sum of digit greater than 5 in %d is %d\n",temp,sum);

}
