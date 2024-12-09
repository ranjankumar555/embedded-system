#include<stdio.h>
int  main(){
	int num; 
	printf("Enter num: ");
	scanf("%d", &num);

	int i=2, flag=1; 
L1:	
	if(num%i==0){
		flag=0;
	}
	i++;
	if(i<num){
		goto L1;
	}

	if(flag && num>2){
		printf("%d is prime number\n",num);
	}
	else{
		printf("%d is not prime number\n",num);

	}
	return 0;
}
