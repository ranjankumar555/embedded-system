#include<stdio.h>
int main(){
	int a,b;
	printf("Enter the value of a and b: ");
	scanf("%d%d", &a,&b);
	int c = a*a + 2*a*b + b*b;
	printf("(a+b)^2 = %d\n", c);
	return 0;
}
