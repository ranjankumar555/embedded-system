#include<stdio.h>
void sum_func(int*, int*, int);

int main(){
	int a[6] = {1,22,121,34,78,444};
	int b[6];
	int n = 6;
	sum_func(a,b,n);
	for(int i=0; i<n; i++){
		printf("%d ",b[i]);
	}
	printf("\n");
	return 0;
}
void sum_func(int *a, int *b, int ele){
	int sum=0;
	for(int i =0; i<ele; i++){
		while(a[i]){
			sum = sum + a[i]%10;
			a[i] /=10;
		}
		b[i] = sum;
		sum=0;
	}
}

