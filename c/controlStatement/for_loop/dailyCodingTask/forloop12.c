#include<stdio.h>
void main(){
        int num, sum=0, count = 0;;
        printf("Enter the number: ");
        scanf("%d", &num);
        int temp = num;
        int digit;
        for(; num>0 && count<3; num/=10, count++){
                digit = num%10;
		sum+=digit;
        }
        printf("The sum of last 3 digit in %d is %d\n",temp,sum);

}
