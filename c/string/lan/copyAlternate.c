#include<stdio.h>
int mystrlen(char* s){
	int i;
	for(i=0; s[i]; i++);
	return i;
}
int main(){
	char s1[20], s2[20];
	printf("Enter two string\n");
	scanf("%s %s", s1,s2);
	int n1,n2,i;
	n1 = mystrlen(s1);
	n2 = mystrlen(s2);
	int len = n1+n2+1;
	char d[len];
	printf("len = %d",len);
	for(i =0;i<len; i++){
		if(i<n1 && s1[i] != '\0'){
			d[i] = s1[i];
		}
		if(i<n2 && s2[i]!='\0'){
			d[i+1] = s2[i];
		}
	}
	d[i] = '\0';
	printf("destination = %s\n",d);
	return 0;
}
