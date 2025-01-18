#include<stdio.h>
#include<stdlib.h>
int isPrime(int);

int main(int a, char** av){

	if(a!=3){
		printf("USAGE: %s int int\n",av[0]);
		return 1;
	}

	int sr,er;
	sr = atoi(av[1]);
	er = atoi(av[2]);
	
	for(int i = sr; i<=er;i++){
		if(isPrime(i)){
			printf("%d ",i);

		}
	}
	printf("\n");	
	return 0;
}
int isPrime(int num){
	int i;

	for(i =2; i<num; i++){
		if(num%i == 0){
			break;
		}
	}
	if(i==num){
		return 1;
	}
	return 0;
}
			
