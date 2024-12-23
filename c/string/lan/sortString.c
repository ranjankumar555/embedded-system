#include<stdio.h>

int mystrlen(char* s){
	int i;
	for(i =0; s[i]; i++);
	return i;
}
void sort(char* stng){
	int n = mystrlen(stng);
	int i,j,t;
	for(i=0; i<n-1; i++){
		for(j = 0; j<n-i-1; j++){
			if(stng[j] > stng[j+1]){
				t = stng[j];
				stng[j] = stng[j+1];
				stng[j+1] = t;
			}
		}
	}
}


int main(){
	char str[50];
	printf("Enter the string: ");
	scanf("%s", str);

	sort(str);

	printf("after sorting= %s\n", str);
	return 0;
}
