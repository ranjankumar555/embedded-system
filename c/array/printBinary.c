#include<stdio.h>

int main(){
	int a[5] = {10,100,1000,100, 10};
	int c = 0;
	for(int i=0; i<5; i++){
		printf("a[%d] = ",i);
		for(int j = 31; j>=0; j--){
			printf("%d", a[i]>>j&1);
		}
		printf("\n");
	}
	return 0;
}
