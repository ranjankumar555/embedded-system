#include<stdio.h>
int rec_fun_prime(int num){
	
	if(num<2) return 0;
	static int i=2;

	if(i<num){
		if(num%i==0)
			return 0;
		i++;
		rec_fun_prime(num);
	}
	else{
		return 1;
	}
}
int main(){
	int n = 17;
	int res = rec_fun_prime(n);
	if(res){
		printf("Yes prime\n");
	}
	else{
		printf("Not prime\n");
	}
	return 0;
}
