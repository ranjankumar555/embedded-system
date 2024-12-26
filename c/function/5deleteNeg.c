#include<stdio.h>
int count_del_fun(int*, int*);
int main(){
	int a[6]={-2, 2,-5,-12,5,-7};
	int n= 6;

	int c = count_del_fun(a,&n);
	printf("-ve number count = %d\n",c);
	for(int i=0; i<n; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}
int count_del_fun(int* a, int* ele){
	int count=0;
	int j=0;
	for(int i=0;i< *ele;i++){
		if(a[i]>>31&1){
			count++;
		}else{
			a[j++] = a[i];
		}
	}
	*ele = j;
	return count;
}
