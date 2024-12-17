#include<stdio.h>
#include<stdlib.h>
char * mystrncpy(char* dest, const char* src, int n);

int main(){

	char d[20];
	char *s = (char*) malloc(sizeof(char)*20);  // char s[20];
	printf("Enter string: ");
	scanf("%s", s);
	
	int n;
	printf("Enter n: ");
	scanf("%d", &n);

	char* p = mystrncpy(d,s, n);
	printf("%s\n", p);
	printf("%s\n", d);
	printf("%s\n", s);

	return 0;

}
/* Array method */
/*
char * mystrncpy(char* dest, const char* src, int n){
	int i;
	for(i =0; i<n && src[i]; i++){
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return dest;
}
*/

/* Pointer method */
char * mystrncpy(char* dest, const char* src, int n){
	int i;
	for(i =0; i<n && src[i]; i++){
		*(dest + i) = *(src+i);
	}
	*(dest + i) = '\0';
	return dest;
}


