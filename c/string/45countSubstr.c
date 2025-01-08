#include<stdio.h>
int countSubstr(char*, char*);

int main(){
	char main[20], sub[10];

	printf("enter main string and substring:\n");
	scanf("%[^\n]s",main);
	scanf(" %[^\n]s",sub);
	
	int res = countSubstr(main,sub);
	printf("count = %d times\n", res);
	
	return 0;
}

int countSubstr(char* m, char* s){
	int i =1, count =0;
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
				count++;
			}
		}
		m++;

	}
	return count;
}


