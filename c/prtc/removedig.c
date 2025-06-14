#include<stdio.h>
int main(){
	int num, p, s = 0, r = 0;
	printf("enter num and pos: ");
	scanf("%d %d", &num, &p);
	
	int c = 0, temp = num;

	// count digit
	while(temp){
		c++;
		temp/=10;
	}
	
	int ap = c - p;

	// skip that digit
	for(;num; ap--, num /=10){
		if(ap){
			s = s*10 + num%10;
		}
	}
	
	// reverse logic
	for(;s; s /= 10){
		r = r*10 + s%10;
	}
	
	printf("After: \n");
	printf("num = %d\n", r);

	return 0;
}

