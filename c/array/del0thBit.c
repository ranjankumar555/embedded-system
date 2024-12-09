#include<stdio.h>

int main(){
	int a[5] = {12,10,35,63,512};
	int c = 0;
	for(int i=0; i<5; i++){
			a[i] = a[i]>>1;
	}
	for(int i=0; i<5; i++){
		printf("%d ",*(a+i));
	}
	
	printf("\n");
	return 0;
}
