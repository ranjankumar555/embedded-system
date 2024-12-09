#include<stdio.h>
void main(){
	char ch = 10 | (1<<7);
	short int a = 0xAB;
	printf("%o", ch^a);

}
