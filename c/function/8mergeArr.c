#include<stdio.h>
void merge(int*, int*, int*, int, int,int);

int main(){
	int p,q,r;
	printf("enter size of 1st array: ");
	scanf("%d", &p);
	int a[p];
	for(int i=0; i<p; i++){
		scanf("%d", &a[i]);
	}
	printf("enter size of 2nd array: ");
	scanf("%d", &q);
	int b[q];
	for(int i=0; i<q; i++){
		scanf("%d", &b[i]);
	}
	r= p+q;
	int c[r];
	
	merge(a,b,c, p,q,r);

	for(int i=0; i<r; i++){
		printf("%d ",c[i]);
	}
	printf("\n");

	return 0;
}

void merge(int* a, int* b, int* c, int p, int q, int r){
	int i,j=0,k=0;

	for(i =0; i<r;){
		if(j<p){
			c[i++] = a[j++];
		}
		if(k<q){
			c[i++] = b[k++];
		}
	}

}


