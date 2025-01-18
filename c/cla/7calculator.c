#include<stdio.h>
#include<stdlib.h>

int main(int a, char** argv){
	if(a!=4){
		printf("USAGE: ./a.out op1 Operator op2\n");
		return 1;
	}

	switch(argv[2][0]){
		case '+':
			printf("sum = %d", atoi(argv[1]) + atoi(argv[3]));
			break;

		case '-':
			printf("sub = %d", atoi(argv[1]) - atoi(argv[3]));
			break;
		case '/':
			printf("div = %f", (float)atoi(argv[1]) / atoi(argv[3]));
			break;

		case '*':
			printf("mul = %d", atoi(argv[1]) * atoi(argv[3]));
			break;

			default:
			printf("invalid input");
	}

	printf("\n");
	return 0;
}
