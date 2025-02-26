#include<stdio.h>
int rec_fun_rev(int num){
	static int rev =0;
	if(num){
		rev = rev*10 + num%10;
		rec_fun_rev(num/10);

	}
	else{
		return rev;
	}
}
int main(){
	int n = 23456;
	int result = rec_fun_rev(n);
	printf("rev num = %d\n", result);
	return 0;
}
