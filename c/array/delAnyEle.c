#include<stdio.h>
void delAnyEle(int *a, int pos, int size){
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
	
	printf("enter index1: ");
	int pos1;
	scanf("%d",&pos1);
	delAnyEle(a,pos1,n);
	
	printf("enter index2: ");
	int pos2;
	scanf("%d",&pos2);
	if(pos2>pos1) pos2-- ;
	delAnyEle(a,pos2,n);


	for(int i=0; i<n; i++){
		printf("%d ", a[i]);
	}

	printf("\n");
	return 0;
}
