#include<stdio.h>
void delAnyEle(int *a, int size){
	int pos;
	printf("Delete index: ");
	scanf("%d", &pos);
	for(int i = pos; i<size-1; i++){
		a[i] = a[i+1];

	}
}
int main(){
	int a[5] = {0};
	int n = sizeof(a)/sizeof(a[0]);
	printf("enter array element: ");
	for(int i = 0; i<n; i++){
		scanf("%d", &a[i]);
	}
	delAnyEle(a,n);
	delAnyEle(a,n-1);
	for(int i=0; i<n-2; i++){
		printf("%d ", a[i]);
	}

	printf("\n");
	return 0;
}
