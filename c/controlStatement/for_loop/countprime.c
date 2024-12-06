#include<stdio.h>
int main(){
	int num,c=0;
	printf("\nEnter a number: ");
	scanf("%d", &num);
	int i,digit;
	int temp = num;
	do{
		digit = temp%10;
		for(i=2; i<=digit; i++){
			if(digit%i == 0){
				break;
			}
		}
		if(digit==i && digit>=2){
			c++;
		}
		temp /= 10;
	}while(temp);
	printf("%d is count of prime number\n", c);
	return 0;
}
