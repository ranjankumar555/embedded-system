#include<stdio.h>
int main(int argc, char** argv){

	FILE* fp;
	fp = fopen("stu", "r+");

	if(fp == 0){
		printf("file not present\n");
		return 1;
	}
	int arr[5]={1,2,3,4,5};
	fwrite(arr, sizeof(int), 5, fp);
	
	int i=0;
	int b[5] = {0};
	fread(&b, sizeof(arr), 1, fp);
	
		for(i = 0; i<5; i++)
			printf("%d ", b[i]);

	printf("\n");
	return 0;
}
