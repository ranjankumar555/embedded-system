#include<stdio.h>
#include<math.h>
int main(){
	int a[6] = {12,234,321,45,654,1234};
	int c = 0;
	for(int i=0; i<6; i++){
		c = (int)log10(a[i])+1;
		a[i] = a[i] % (int)pow(10, c-1);
	}
	for(int i=0; i<6; i++){
		printf("%d ", *(a+i));
	}
	printf("\n");
	return 0;
}
