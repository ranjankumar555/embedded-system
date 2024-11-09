#include<stdio.h>
int main(){
	int i=10;
	char ch = 'a';
	float f = 23.5;
	double d = 45.67;
        printf("%lu %lu %lu\n", sizeof(int),sizeof(i),sizeof(20));
	printf("%lu %lu %lu\n", sizeof(char),sizeof(ch),sizeof('a'));
	printf("%lu %lu %lu\n", sizeof(float),sizeof(f),sizeof(24.7f));
	printf("%lu %lu %lu\n", sizeof(double),sizeof(d),sizeof(4.5));
	printf("%lu\n",sizeof("abcd"));
        return 0;
}
