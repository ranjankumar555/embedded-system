#include<stdio.h>
void main(){
        int num,digit, rev=0;
        printf("Enter the number: ");
        scanf("%d", &num);

        for( ;num>0; num/=10){
                digit = num%10;
		if(digit>4 && digit<8)
                rev = rev*10 + digit; 


        }
        printf("Number after reverse of last2 digit: %d\n", rev);
}
