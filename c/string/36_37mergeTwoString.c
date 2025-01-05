#include<stdio.h>
void merge(const char*, const char*);
int mystrlen(const char*);
int main(){
	char s1[10], s2[10];
	printf("enter string1: ");
	scanf("%s",s1);
       	printf("enter string2: ");
       	scanf("%s",s2);
	
	merge(s1,s2);

	//printf("after merge: %s\n", res);
	return 0;
}

void merge(const char* s1, const char* s2){
	int x,y,z, i, j=0;
	x = mystrlen(s1);
	y = mystrlen(s2);

	z = x + y;
	char res[z];

	for(i=0; i<z; i++){
		if(i<x){
			*(res + j++) = *(s1+i);
		}
		if(i<y){
			*(res + j++) = *(s2 + i);
		}
	}
	*(res + j) = '\0';

	printf("after merge: %s\n", res);
}

int mystrlen(const char* str){
	int i=0;
	while(*(str+i)){
		i++;
	}
	return i;
}
