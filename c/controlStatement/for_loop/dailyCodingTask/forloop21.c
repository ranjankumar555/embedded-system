#include<stdio.h>
void main(){
        int num,digit, sum = 0, rev=0;
        printf("Enter the number: ");
        scanf("%d", &num);

        for( ;num>0; num/=10){
                rev = rev*10 + num%10;
	}
	int count =0;
	printf("reverse = %d",rev);
	for( ;rev>0&&count<3; rev/=10, count++){ 
                sum += rev%10;
        }
        printf("Sum of 1st 3 digit: %d\n", sum);
}
