#include<stdio.h>
int rec_fun_prod(int num){
	static int r=0, p =1;
	if(num){
		r = num%10;
		if(r%3==0)
			p = p*r;
		rec_fun_prod(num/10);
	}
	else{
		return p;
	}
}

int main(){
	int n;
	printf("enter number: ");
	scanf("%d", &n);

	printf("product = %d\n", rec_fun_prod(n));

	return 0;
}

