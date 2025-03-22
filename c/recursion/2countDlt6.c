#include<stdio.h>
int rec_fun_count(int num){
	static int c =0;
	static int r = 0;
	if(num){
		r = num%10;
		if(r<6){
			c++;
		}
		rec_fun_count(num/10);
	}
	else{
		return c;
	}
}
int main(){
	int n;
	printf("enter number: ");
	scanf("%d", &n);

	int count = rec_fun_count(n);
	printf("count = %d\n", count);

	return 0;
}
