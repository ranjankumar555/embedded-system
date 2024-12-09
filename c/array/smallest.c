#include<stdio.h>
int main(){
	int a[6] = {2,2,3,1,5,-6};
	int small, n = sizeof(a)/sizeof(a[0]);
	for(int i=0; i<n-1; i++){
		small = a[0];
		if(a[i+1] < small){
			small = a[i+1];
		}
	}
	printf("Smallest = %d\n",small);
	return 0;
}
