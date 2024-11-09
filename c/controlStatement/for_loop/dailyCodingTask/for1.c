#include<stdio.h>
void main(){
	
	int num,factor = 0;
	printf("Enter the number: ");
	scanf("%d", &num);

	for(int i=1; i<=(num/2); i++){
		if(num%i == 0)
			printf("factor = %d\n",i);
	
	}

	printf("factor = %d\n",num);


}
