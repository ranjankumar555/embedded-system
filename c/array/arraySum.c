#include<stdio.h>
int main(){
	int a[5] = {10,20,30,40,50};
	int sum = 0;
	int *p =a;
	for(int i =0; i<5; i++){
		sum += *(p+i);
	}
	printf("sum = %d\n", sum);
	return 0;
}
