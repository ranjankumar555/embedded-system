#include<stdio.h>
#include<math.h>
void del_fun(int*, int);
int main(){
	int a[6]={12,142,1234,314,78,414};
	int n=6;
	del_fun(a,n);

	for(int i =0; i<n; i++){
		printf("%d ", *(a+i));
	}
	printf("\n");
	return 0;
}
void del_fun(int *a, int ele){
	int count = 1;
	for(int i=0; i<ele; i++){
		count = (int)log10(a[i])+1;
		*(a+i) = *(a+i) % (int)pow(10,count-1);
		count =0;
	}
}
