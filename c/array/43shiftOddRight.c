#include<stdio.h>
int main(){

	int a[7] = {11,22,22,44,55,33,88};
	int n = 7, i,j,temp,t;
	t=n;

	for(i = 0; i<t; i++){
		if(a[i] % 2 != 0){
			temp = a[i];
			for(j =i; j<n-1; j++){
			       a[j] = a[j+1];
			}
 			a[n-1] = temp;
			i--;
			t--;
		}
	}
	
	printf("after odd shifted to right:\n");
	for(i =0; i<n; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}


