#include<stdio.h>
int main(){
	int a[5] = {11,22,33,44,55};
	int *p = a;
	for(int i=0; i<5; i++){
		//printf("%d ", p[i]);
		//printf("%d ", *p);
		printf("%d ", *(p+i));
	}
	printf("\n");
	return 0;
};
