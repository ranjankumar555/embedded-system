#include<stdio.h>
void repSubstr(char*, const char*, const char*);
void mystrcpy(char*, const char*);
int main(){
	char main[30], sub[10], rep[10];

	printf("enter main string: ");
	scanf("%[^\n]s",main);
	
	printf("enter word to be replaced: ");
	scanf(" %[^\n]s",sub);

	printf("%s replace with: ",sub);
	scanf(" %[^\n]s",rep);
	
	repSubstr(main, sub, rep);

	printf("%s\n",main);
	return 0;
}

void repSubstr(char* m, const char* s,const char* r){
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
				mystrcpy(m,r);
			}
		}
		m++;

	}
	*m = '\0';
}

void mystrcpy(char* d, const char* s){
	int i =0;
	while(*(s+i)){
		*(d+i) = *(s+i);
		i++;
	}
	
}
