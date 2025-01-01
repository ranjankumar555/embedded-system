#include<stdio.h>
void main(){
        int num, sum = 0;
        printf("Enter number: ");
        scanf("%d", &num);
	int digit;
        while(num){
		digit = num%10;
		if(digit%2!=0)
                	sum += digit;
                num /=10;
        }
        printf("sum = %d\n",sum);
}
