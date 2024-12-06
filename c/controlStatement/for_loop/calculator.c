#include<stdio.h>
int main(){
	int a,b,c;
	char ch;
	printf("enter a and b: ");
	scanf("%d%d",&a,&b);
	printf("press + to add\npress - to subtract\npress * to multiply\npress / to divide\n");
	printf("select option: ");
	scanf(" %c", &ch); //put one space btw " and %c to avoid one small bug
	switch(ch){
		case '+':
			c = a+b;
			printf("Sum of %d and %d is %d\n",a,b,c);

			break;
		case '-':
			c = a-b;
                        printf("Subtraction of %d and %d is %d\n",a,b,c);

                        break;
		case '*':
			c = a*b;
                        printf("Multiplication of %d and %d is %d\n",a,b,c);

                        break;
		case '/':
			c = a/b;
                        printf("int division of %d and %d is %d\n",a,b,c);

                        break;
		default:
			printf("Invalid input\n");
	}
	return 0;
}

