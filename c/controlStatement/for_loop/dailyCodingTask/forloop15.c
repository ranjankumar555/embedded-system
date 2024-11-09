#include<stdio.h>
void main(){
        int num, rev =0;
       printf("Enter the number: ");
        scanf("%d", &num);
        int digit;
        for(; num>0; num/=10){
                digit = num%10;
		rev = rev * 10 + digit;
        }
	int result = rev%10;
        printf("The first digit is %d\n",result);

}

