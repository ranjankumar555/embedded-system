#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter value of a and b: ");
	scanf("%d%d",&a, &b);
	int result = 3*a*b*b + a*a*a + 3*b*a*a + b*b*b;
	printf("(a+b)^3 = %d\n", result);
	return 0;
}
