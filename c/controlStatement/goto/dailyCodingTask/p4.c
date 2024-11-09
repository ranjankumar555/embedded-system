#include<stdio.h>
void main(){
        int num,digit, sum = 0;
        printf("Enter Number: ");
        scanf("%d", &num);
        int temp = num;
L7:
        digit = (num%10);
	if(digit%3==0){
		sum += digit;
	}
        num/=10;

        if(num>0){
                goto L7;

        }

        printf("The sum of divisible digit by 3 in %d is: %d\n", temp, sum);
}
