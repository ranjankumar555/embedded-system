#include<stdio.h>

int main(int argc, char** argv){
	if(argc != 2){
		printf("Usage: ./a.out str\n");
		return 1;
	}
	int c=0;
	char* p = *(argv+1);
	while(*p){
		if(*p>='0' && *p<='9'){
			c++;
		}
		p++;
	}
	printf("Count = %d\n", c);

	return 0;
}
