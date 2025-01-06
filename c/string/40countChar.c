#include<stdio.h>

void countChar(char* p);
void mystrcpy(char* d, char* s);

void main(int argc, char** argv){
	char *s = argv[1];
	/*char s[20];
	printf("enter the string: ");
	scanf("%s", s);*/
	
	countChar(s);
}

void countChar(char* p){
	int i,j,count =1;
	for(i=0; *(p+i); i++){
		for(j=i+1; *(p+j); j++){
			if(*(p+i) == *(p+j)){
				count++;
				mystrcpy(p+j, p+j+1);
				j--;
			}
		}
		printf("%c-->%d\n",*(p+i), count);
		count = 1;
	}
	printf("\n");
}

void mystrcpy(char* d, char* s){
	while(*s){
		*d = *s;
		d++;
		s++;
	}
	*d = '\0';
}
