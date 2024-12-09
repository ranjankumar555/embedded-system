#include<stdio.h>
int main(){
	int num;
	printf("Enter num: ");
	scanf("%d", &num);
	int sum=0,i=1;
	while(i<num){
		if(num%i == 0){
			sum = sum+i;
		}
		i++;
	}
	if(sum == num){
		printf("%d is perfect number\n", num);
	}
	else{
		printf("%d is not perfect number\n",num);
	}
	return 0;
}
