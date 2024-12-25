#include<stdio.h>

int fact(int );
int main(){
	char s[20], *p =s;
	printf("enter the string: ");
	scanf("%s", p);
	
	int i,count =0;
	while(*p){
		count++;
		p++;
	}
	
	int sum =0, temp = count;
	while(count){
		sum += fact(count%10);
		count = count/10;
	}
	if(sum == temp){
		printf("%d is strong number\n",temp);
	}
	else{
		printf("%d is not strong number\n",temp);
	}

	return 0;
}
int fact(int n){
	int f = 1;
	while(n){
		f = f*n--;
	}
	return f;
}
