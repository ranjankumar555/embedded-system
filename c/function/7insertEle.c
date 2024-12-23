#include<stdio.h>
void insert(int *a, int ele, int n, int p);
int main(){
	int a[6] = {-1,2,3,-5,-7};
	int ele = sizeof(a)/sizeof(a[0]);

	int n, p;
	printf("enter num to insert: ");
	scanf("%d",&n);
	printf("enter pos: ");
	scanf("%d",&p);

	insert(a, ele, n, p);
	return 0;
}

void insert(int *a, int ele, int n, int p){
	if(p>=ele || p<0){
		printf("invalid pos\n");
		return;
	}
	
	for(int i =ele-1; i>p; i--){
		a[i] = a[i-1];
	}
	a[p]=n;	
	//print array
	for(int i=0; i<ele; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
}  
