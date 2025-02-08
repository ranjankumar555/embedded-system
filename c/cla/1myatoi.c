#include<stdio.h>
int  my_atoi(const char*);
int main(int argc, char** argv){
	if(argc!=2){
		printf("USAGE: ./a.out integerStr\n");
		return 1;
	}

	int res = my_atoi(*(argv+1));
	printf("num = %d\n", res);
	return 0;
}

int my_atoi(const char* p){
	int num =0;
	char ch = *p;
	if(*p == '+' || *p == '-'){
		p = p+1;
	}
	while(*p){
		if(*p>='0' && *p <= '9'){
			num = num* 10 + *p - 48;
		}
		else{
			break;
		}
		p++;
	}
	if(ch == '-'){
		num= -num;
	}

	return num;
}
