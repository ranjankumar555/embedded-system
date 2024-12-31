#include<stdio.h>
void sort(char*);
int mystrlen(char*);
int main(){
	char s[20];
	printf("Enter string: ");
	scanf("%s", s);

	sort(s);

	printf("after sorting: %s\n", s);

	return 0;
}
void sort(char* str){
	int i=0, j=0;
	char temp;
	int n = mystrlen(str);
	while(*(str+i)){
		while(j<n-i-1){
			if(*(str+j) > *(str+j+1)){

				temp = *(str+j);
				*(str+j) = *(str+j+1);
				*(str+j+1) = temp;
			}
			j++;
		}
		i++;
		j=0;
	}
}
int mystrlen(char* s){
	int i;
	for(i=0; s[i]; i++);
	return i;
}

