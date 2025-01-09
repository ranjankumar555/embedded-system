#include<stdio.h>
void mystrcpy(char*, char*);
void deleteLargest(char *);
int main(){
	char s[20];
	printf("enter string: ");
	scanf("%[^\n]s",s);

	deleteLargest(s);
	printf("%s\n", s);

	return 0;
}
void deleteLargest(char *p){
	int count =0, prevCount = 0;
	char* q = p;
	while(*p){
		if(*p != ' '){
			count++;
		}
		else{
			if(count>=prevCount){
				prevCount = count;
				q = p - prevCount;
				mystrcpy(q, q+prevCount);
			}
			count=0;
		}
		p++;
	}
	//for last word
	if(count>=prevCount){
		prevCount = count;
		q = p - prevCount;
	}
	mystrcpy(q, q+prevCount);
}

void mystrcpy(char* d, char* s){
	while(*s){
		*d = *s;
		d++;
		s++;
	}
	*d = '\0';
}
