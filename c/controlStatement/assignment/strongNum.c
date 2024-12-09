#include<stdio.h>
int main(){
	int num;
	printf("Enter num: ");
	scanf("%d", &num);
	int digit, fact=1, temp=num, sum=0;
	while(num>0){
		digit=num%10;
	       int i=1;
	       fact=1;
       		while(i<=digit){
	 		fact = fact*i;
			i++;
		}
		sum = sum+fact;
		num /=10;
	}
	if(sum == temp){
		printf("%d is strong number\n", temp);
	}
	else{
		printf("%d is not strong number\n", temp);
	}
	return 0;
}	

