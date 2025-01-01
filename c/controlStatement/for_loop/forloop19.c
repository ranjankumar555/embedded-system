#include<stdio.h>
void main(){
        int num,digit, rev=0;
        printf("Enter the number: ");
        scanf("%d", &num);

        for( ;num>0; num/=10){
                digit = num%10;
		if(digit>5)
                rev = rev*10 + num%10; 


        }
        printf("Number after reverse of last2 digit: %d\n", rev);
}
