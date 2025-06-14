#include<stdio.h>
// iterative
int binary_search(int* arr, int n, int key){
	int left = 0, right = n-1, mid = 0;
	while(left<=right){
		mid = (left+right)/2;
		if(arr[mid] == key){
			return arr[mid];
		}
		if(key<arr[mid]){
			right = mid-1;
		}
		if(key>arr[mid]){
			left = mid+1;
		}
	}
	return 0;
}
// recursive

int main(){
	FILE* fp = fopen("input.txt", "r");
	int name[10], i;
	//printf("enter data: ");
	for(i = 0; i<10; i++){
		fscanf(fp, "%d", &name[i]);
	}

	int key;
	printf("enter key: ");
	scanf("%d", &key);
	int res = binary_search(name, 10, key);
	if(res){
		printf("%d present\n", key);
	}
	else{
		printf("%d not present\n",key);
	}

	return 0;

}
