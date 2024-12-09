/*******************************************************
WAP in C to count even digits using do-while loop
 *******************************************************/
#include<stdio.h>
int main(){
        int num,c =0, digit;
        printf("Enter the number: ");
        scanf("%d", &num);

	do{
        digit = num%10;
	if(digit%2==0)c++;
        num=num/10;
	}while(num);
        printf("Even digits = %d\n", c);
        return 0;
}
