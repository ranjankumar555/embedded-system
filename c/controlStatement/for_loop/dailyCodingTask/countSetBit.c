#include<stdio.h>
int main(){
	int num, count=0;
	printf("Enter number: ");
	scanf("%d", &num);
	for(int i=0; i<32; i++){
		if(num>>i&1){
			count++;
		}
	}
	
	//check count is prime or not
	int i;
	for(i=2; i<=num; i++){
		if(count%i==0){
			break;
		}
	}
	printf("Number of set bit = %d\n",count);
	if(count == i && count>=2){
		printf("Yes, Prime\n");
	}
	else{
		printf("Not, prime\n");
	}	
}

