#include<stdio.h>
int main(){
	int a[5] = {99, 88, 77 ,66, 55};
	int n = sizeof(a)/sizeof(a[0]);
	for(int i =0; i<n-1; i++){
		a[i] = a[i+1];

		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}
