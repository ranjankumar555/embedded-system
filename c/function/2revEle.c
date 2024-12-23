#include<stdio.h>
void rev_fun(int*, int*, int);
int main(){
	int a[6] = {12,42,123,34,78,414};
	int b[6], n=6;

	rev_fun(a,b,n);
	
	for(int i=0; i<n; i++){
		printf("%d ", b[i]);
	}
	printf("\n");
}
void rev_fun(int *a, int *b, int ele){
	int rev =0;
	for(int i =0; i<ele; i++){
		while(a[i]){
			rev = rev*10 + a[i]%10;
			a[i] = a[i]/10;
		}
		b[i] =rev;
		rev =0;
	}
}

