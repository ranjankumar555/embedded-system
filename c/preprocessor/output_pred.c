#include<stdio.h>
#define CUBE(X) X*X*X

int main(){
	int a,b,c;
	b = 3;
	a = CUBE(b++);
	printf("%d\n", a);
	
	b= 3;
	c = CUBE(++b);
	printf("%d\n", c);
	return 0;
}
