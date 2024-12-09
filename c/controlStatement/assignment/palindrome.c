#include<stdio.h>
int main(){
	int num,rev=0;
	printf("Enter the number: ");
	scanf("%d", &num);
	int temp=num;
	do{
		rev = rev*10 + temp%10;
		temp /=10;
	}while(temp>0);
	if(num == rev){
		printf("%d is palindrome number\n",num);
	}else{
		printf("%d is not prime number\n",num);
	}
}

