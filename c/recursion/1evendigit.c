#include<stdio.h>
int rec_fun_sum(int num){
	
	static int i=0;
	static int r = 0;
	if(num){
		r = num%10;
		if(r%2==0){
			i = i+r;
		}
		return rec_fun_sum(num/10);
	}
	else{
		return i;
	}

}
int main(){
	int n;
	int sum =0;
	printf("enter number: ");
	scanf("%d",&n);

	sum = rec_fun_sum(n);

	printf("sum = %d\n",sum);
        return 0;
}       
