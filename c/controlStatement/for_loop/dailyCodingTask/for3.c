#include<stdio.h>
void main(){
        int num;
        printf("Enter the Number: ");
        scanf("%d", &num);

        int sum =0;
	int digit =0;
        for(; num>0; num/=10){
		digit = num%10;
                if(digit %  2 == 0){
                        sum+=digit;
                }
        }
        printf("Sum of even digits: %d\n", sum);
}

