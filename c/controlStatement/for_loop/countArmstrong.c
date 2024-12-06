//only for three digit, but we cand make this genric -> pow(digit, total_digit_count)
#include<stdio.h>
#include<math.h>
int main(){
	int sr, er, sum, c=0, temp, digit;
	printf("\nEnter start and end range: ");
	scanf("%d %d", &sr, &er);
	for(int num = sr; num<er; num++){
		temp = num;
		sum=0;
		while(temp){
			digit = temp%10;
			sum += (int)pow(digit,3);
			temp /= 10;
		}
		if(sum ==num){
			printf("%d ",num);
			c++;
		}
	}
	printf("count = %d\n",c);
}
