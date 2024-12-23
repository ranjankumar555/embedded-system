#include<stdio.h>
static int n = 10;
void delete(int* ,int, int*);
int main(void){
	int a[10] = {3,3,2,4,4,1,2,3,7,9};
	//n=10;
	for(int i = 0,j; i<n; i++){
		for(j = i+1; j<n; j++){
			if(a[i] == a[j]){
				delete(a, j, &n);
				j--;

			}
		}
	}

	//print array element
	for(int i =0; i<n; i++){
		printf("%d ", a[i]);
	}
	printf("\n");

	return 0;

}

void delete(int* arr, int index, int* len){
	if(index<0 && index>*len-1){
		printf("invalid index\n");
		return;
	}
	for(int i=index; i<*len; i++){
		arr[i] = arr[i + 1];
	}
	(*len)--;
}
