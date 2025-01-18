#include<stdio.h>
#include<stdlib.h>

int main(int argc, char** argv){
	if(argc != 6){
		printf("USAGE: %s array element", argv[0]);
		return 1;
	}

	int a[argc-1];
	for(int i=1; i<argc; i++){
		a[i-1] = atoi(argv[i]);

	}
	
	printf("original array: \n");
	for(int i = 0; i<argc-1; i++){
		printf("%d ", a[i]);
	}

	printf("\nprinting in reverse order: \n");
	for(int i = argc-1; i>0; i--){
		printf("%d ", a[i-1]);
	}
	printf("\n");

	return 0;
}
