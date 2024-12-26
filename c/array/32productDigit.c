#include<stdio.h>
int product(int);
int main(){
	int a[5]={11,202,234,456,90};
	int n = 5;
	for(int i=0; i<n; i++){
		a[i] = product(a[i]);
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}
int product(int num){
	int prd = 1;
	while(num){
		prd *= num%10;
		num /= 10;
	}
	return prd;
}
