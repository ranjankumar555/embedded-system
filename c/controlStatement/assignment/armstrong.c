#include<stdio.h>
#include<math.h>
int main(){
	int count=0, num, temp;
	printf("Enter num: ");
	scanf("%d", &num);
	temp = num;
	int temp1 = num;
	while(num>0){
		count++;
		num = num/10;
	}
	long int sum =0;
	while(temp){
		sum = sum +(long int)pow(temp%10, count);
		temp /=10;
	}
	if(temp1==sum)
		printf("%d is armstrong number", temp1);
	else
		printf("%d is not armstrong number",temp1);
	return 0;
}
	
		
