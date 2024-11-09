#include<stdio.h>
void main(){
	int num;
	printf("Enter the Number: ");
	scanf("%d", &num);

	int count =0;

	for(; num>0; num/=10){
		if(num%10 > 5){
			count++;
		}
	}
	printf("Number of digits more than 5: %d\n", count);
}


