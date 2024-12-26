#include<stdio.h>
#include<math.h>
int strong_fun(int*, int ele);
int armstrong_fun(int*, int ele);
int main(){
	int a[6]={2,153,145,2,3,153};
	int n =6;
	int strong = strong_fun(a,n);
	int armstrong = armstrong_fun(a,n);
	printf("strong number count = %d\n", strong);
	printf("armstrong number count = %d\n", armstrong);
	
	return 0;
}
int strong_fun(int *a, int ele){
	int cs =0, sum =0;
	for(int i =0,j;i<ele; i++){
		for(j = 1; j<a[i]; j++){
			if(a[i]%j ==0){
				sum += a[i];
			}
		}
		if(sum == a[i]){
			cs++;
		}
		sum =0;
	
	}
	return cs;
}

int armstrong_fun(int *a, int ele){
	int sum =0, p = 1, ca = 0;
	int temp;
	for(int i =0; i<ele; i++){
		temp = a[i];
		p = (int)log10(a[i])+1;
		while(a[i]){
			sum = sum + (int) pow(a[i]%10, p);
			a[i] /=10;
		}
		if(temp == sum){
			ca++;
		}
		sum =0;
	}
	return ca;
}
