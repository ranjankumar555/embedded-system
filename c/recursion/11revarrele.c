#include<stdio.h>
void rec_fun_rev_arr(int *p, int *q){
	static int temp=0;
	if(p<q){
		temp = *p;
		*p = *q;
		*q = temp;
		rec_fun_rev_arr(++p, --q);
	}
}
int main(){
	int a[6]={11,22,33,44,55,66};
	int ele = sizeof(a)/sizeof(a[0]);
	printf("original array: ");
	for(int i=0; i<ele; i++){
		printf("%d ", a[i]);
	}
	printf("\n");

	rec_fun_rev_arr(a, a+ele-1);
	
	printf("reversed array: ");
	for(int i=0; i<ele; i++){
		printf("%d ", a[i]);
	}
	printf("\n");

	return 0;
}



