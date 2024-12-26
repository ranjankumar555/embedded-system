#include<stdio.h>
int main(){
	char s[20], *p =s;
	printf("enter the string: ");
	scanf("%s", p);
	
	int i,count =0;
	while(*p){
		count++;
		p++;
	}
	for(i=2; i<count; i++){
		if(count%i == 0){
			break;
		}
	}
	if(i == count){
		printf("yes %d is prime number\n", count);
	}
	else{
		printf("No %d is not prime number\n", count);
	}
	return 0;
}

