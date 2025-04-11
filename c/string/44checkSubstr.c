#include<stdio.h>
const char* checkSubstr(char*, char*);

char* my_strstr(char* main, char* sub);
int main(){
	char main[20], sub[10];

	printf("enter main string and substring:\n");
	scanf("%[^\n]s",main);
	scanf(" %[^\n]s",sub);
	
	if(my_strstr(main,sub)){
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

char* my_strstr(char* main, char* sub){

	int i = 0, j = 0;
	while(main[i]){
		if(main[i] == sub[0]){

			while(sub[j]){

				if(main[i]!=sub[j])
				{
					j=0;
					break;
				}
				i++;
				j++;
			}
			if(sub[j] == '\0'){
				return main+i;
			}
		}
		i++;
	}
	return NULL;
}







