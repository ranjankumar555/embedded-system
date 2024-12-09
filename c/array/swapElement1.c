#include<stdio.h>
int main(){
	int *p, *q, a[6] = {111,222,333,444,555,666};
	p = &a[0];
	q = &a[5];

	*p = *p ^ *q; 
	*q = *p ^ *q; 
	*p = *p ^ *q; 

	for(int i =0; i<6; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}
