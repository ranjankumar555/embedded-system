#include<stdio.h>
#include<stdlib.h>
int main(int a, char** av){
	if(a!=4){
		printf("USAGE: %s float float float\n",av[0]);
		return 1;
	}
	float f1 = atof(av[1]);
	float f2 = atof(av[2]);
	float f3 = atof(av[3]);

	float sum = f1+f2+f3;
	float avg = sum/3;

	printf("sum = %.2f\n",sum);
	printf("avg = %.3f\n",avg);

	return 0;
}



