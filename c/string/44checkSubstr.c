#include<stdio.h>
const char* checkSubstr(char*, char*);

int main(){
	char main[20], sub[10];

	printf("enter main string and substring:\n");
	scanf("%[^\n]s",main);
	scanf(" %[^\n]s",sub);
	
	if(checkSubstr(main,sub)){
		printf("Yes present\n");
	}
	else{
		printf("Not present\n");
	}
	
	return 0;
}

const char* checkSubstr(char* m, char* s){
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
				return m;
			}
		}
		m++;

	}
	return NULL;
}


