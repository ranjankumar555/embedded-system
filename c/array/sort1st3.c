#include<stdio.h>
void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
void sortFirst3(int *p, int n){
	for(int i = 0; i<n-1; i++){
		for(int j = 0; j < n-i-1; j++){
			if(p[j] > p[j+1]){
				swap(&p[j], &p[j+1]);
			}
		}
	}

}
int main(){
	int a[7]={11,33,22,2,9,1,6};
	int size = sizeof(a)/sizeof(a[0]);
	int n = 3;
	sortFirst3(a,n);
	for(int i=0; i<size; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}

