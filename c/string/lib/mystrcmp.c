#include<stdio.h>

int mystrcmp(const char* s1, const char* s2);

int main(){
	char str1[20], str2[20]; 
	scanf("%s", str1);
	scanf("%s", str2);

	int r = mystrcmp(str1,str2);
	printf("cmp result = %d\n", r);
	if(r==0){
		printf("s1 == s2");
	}
	else if(r>0){
		printf("s1 > s2");
	}
	else{
		printf("s1 < s2");
	}
	printf("\n");

	return 0;
}

/* Array method */
/*
int mystrcmp(const char* s1, const char* s2){
	int i; 
	for(i=0; s1[i]; i++){
		if(s1[i] != s2[i]) break;

	}
	return s1[i] - s2[i];
}
*/
/* pointer method */
int mystrcmp(const char* s1, const char* s2){
	int *p; 
	while(*s1){
		if(*s1 != *s2) break;
		s1++;
		s2++;
	}
	return *s1 - *s2;
}

