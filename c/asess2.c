#include<stdio.h>
#include<stdlib.h>
void deletePrime(int **);
int isPrime(int);
int setBit(int);
int main(){
	int i,j, t = 0;
	int arr[10] = {123, 145, 168, 198, 15, 13, 124, 253, 504, 1021};

	int **ptr = (int**)malloc(sizeof(int*)*2);
	
	for(i = 0; i<2; i++){
		ptr[i] = (int*)malloc(sizeof(int)*5);
	}

	for(i=0; i<2; i++){
		for(j = 0; j<5; j++){
			ptr[i][j] = arr[t++];
		}
	}
	
	
	for(i=0; i<2; i++){
		for(j = 0; j<5; j++){
			printf("%d ", ptr[i][j]);
		}

		printf("\n");
	}


	deletePrime(ptr);
	
	for(i=0; i<2; i++){
		for(j = 0; j<5; j++){
			printf("%d ", ptr[i][j]);
		}

		printf("\n");
	}


		
	return 0;
}
void deletePrime(int **p){
	
	int i, j, temp, k, n=5;
	
	int row = 2, col = 5;

	for(i = 0; i<row; i++){
		for(j = 0; j<col; j++){
			temp = setBit(p[i][j]);
			if(isPrime(temp)){
				for(k=0; k<n; k++){
					p[i][k] = p[i][k+1];
					
				}
				j--;
				n--;				
			}
		}
		n= 5;
	}

}
int setBit(int num){
	int c = 0;
	for(int i = 31; i>=0; i--){
		if(num>>i&1) c++;
	}
	return c;
}
int isPrime(int num){
	int i;

	for(i=2; i<num; i++){
		if(num%i == 0){
			break;
		}
	}
	if(i == num){
		return 1;
	}
	return 0;
}
