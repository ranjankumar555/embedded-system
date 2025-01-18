#include<stdio.h>
void reverse(char*,char*);
int main(int argc, char** argv){
	if(argc != 4){
		printf("USAGE: ./a.out str str str\n");
		return 1;
	}
	char* p = argv[1];
	int j, temp=0;
	char s[30];
	for(int i = 1; *(argv+i); i++){
		for(j=0; *(*(argv+i)+j); j++){
			//(s+temp++) = *(*(argv + i)+j);
			s[temp++] = argv[i][j];
		}
		s[temp++] = ' ';

	}
	*(s+temp) = '\0';
	reverse(s, s+temp-1);
	printf("%s\n", s);

	return 0;
}

void reverse(char* p, char* q){
	char temp;
	while(p<q){
		temp = *p;
		*p = *q;
		*q = temp;
		p++;
		q--;
	}
}
