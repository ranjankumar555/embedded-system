#include<stdio.h>
#include "arrayLib.h"

// To delete the element
void delete(int* arr, int index, int* len) {
    if (index < 0 || index >= *len) {
        printf("Invalid index\n");
        return;
    }
    for (int i = index; i < *len - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*len)--;
}

// To print the array
void printArray(int *arr, int n){
	for(int i=0; i<n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}
