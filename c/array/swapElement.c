#include<stdio.h>
int main(){
	int a[6] = {11,22,33,44,55,66};
	a[3] = a[3]^a[4];
	a[4] = a[3]^a[4];
	a[3] = a[3]^a[4];

	for(int i = 0; i<6; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}
