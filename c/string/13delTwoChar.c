#include<stdio.h>
void reverse(char*, int);
int len(const char*);
int main(){
	char s[20],ch;
	printf("Enter string: ");
	scanf("%s", s);
	printf("Enter char to be deleted: ");
	scanf(" %c", &ch);
	
	int length = len(s);
	reverse(s,length);
	char *p = s;
	char* q = s;
	int c =0;
	while(*p){
		if(c<2){
			if(*p != ch){
				*q++ = *p;
			}
			else{
				c++;
			}
		}
		else{
			*q++ = *p;
		}
		p++;
	}
	*q = '\0';
	length = len(s);
	reverse(s,length);
	printf("After deletion: %s\n", s);
	return 0;
}
void reverse(char* p, int len){
	char* q = p+len-1, t;

	while(p<q){
		t = *p;
		*p = *q;
		*q = t;

		p++;
		q--;
	}
}
int len(const char* str){
	int i=0;
	while(*(str+i)){
		i++;
	}
	return i;
}

