#include<stdio.h>
void delSubstr(char*, const char*);
void mystrcpy(char*, char*);
int main(){
	char main[20], sub[10];

	printf("enter main string and substring:\n");
	scanf("%[^\n]s",main);
	scanf(" %[^\n]s",sub);
	
	delSubstr(main,sub);
	printf("%s\n",main);
	return 0;
}

void delSubstr(char* m, const char* s){
	int i =1;
	while(*m){
		if(*m == *s){
			while(*(s+i)){
				if(*(m+i) != *(s+i)){
					i=1;
					break;
				}
				i++;
			}
			if(*(s+i) == '\0'){
				mystrcpy(m,m+i);
			}
		}
		m++;

	}
}

void mystrcpy(char* d, char* s){
	while(*s){
		*d = *s;
		d++;
		s++;
	}
	*d = '\0';
}
