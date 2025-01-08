#include<stdio.h>
void replaceWord(char*, char*, char*);
void mystrcpy(char*, char*);
void shiftRight(char*, int, int);
int mystrlen(char*);

int main(){
	char main[30], sub[10], rep[10];
	int len=0;

	printf("enter main string: ");
	scanf("%[^\n]s", main);

	printf("enter substring to replace: ");
	scanf(" %[^\n]s", sub);

	printf("enter replacing string: ");
	scanf(" %[^\n]s", rep);

	replaceWord(main, sub, rep);

	printf("after replaced : %s\n",main);
	return 0;
}
void replaceWord(char* m, char* s, char* r){
	int rlen = mystrlen(r);
	int len = rlen - mystrlen(s);
	int mlen = mystrlen(m);
	int i=1;
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
				shiftRight(m, mlen, len);
				mystrcpy(m,r);
				m = m+rlen; 
			}
		}
		m++;
	}
	*m = '\0';
}

void mystrcpy(char* d, char* s){
	int i=0;
	while(*(s+i)){
		*(d+i) = *(s+i);
		i++;
	}
}
void shiftRight(char* main, int mlen, int n){
	int i;
	if(n>0){
		for(i=mlen; i>=0; i--){
			*(main + i + n) = *(main + i);
		}
	}
}
int mystrlen(char* s){
	int i=0;
	while(*(s+i)){
		i++;
	}
	return i;
}

