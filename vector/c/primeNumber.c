#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool isPrime(int n){
	if(n<2){ return false;}
	for(int i=2; i<=(int)sqrt(n); i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
int main(){
	int x;
	scanf("%d", &x);
	if(isPrime(x)){
		printf("%d is Prime Number",x);
	}
	else{
		printf("%d is not prime Number",x);
	}
	return 0;
}
