#include<stdio.h>
#include<math.h>
void main(){
	int num,digit, sum = 0, rev=0;
	printf("Enter the number: ");
	scanf("%d", &num);
	int total_digit = (int)log10(num) +1;

	//for odd
	int mid  = total_digit/2;
	if(total_digit % 2 != 0){
		for(int count = 0; count<mid; num /= 10,count++){

		}
		printf("Middle digit: %d\n", num%10);
	}

	//for even
	else{
		for(int count = 0; num>0 && count<mid-1; num /= 10,count++){
		}
		printf("Middle digit: %d/", num%10);
		num = num/10;
		printf("%d\n", num%10);

	}
}
