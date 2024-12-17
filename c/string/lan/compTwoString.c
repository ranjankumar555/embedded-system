#include<stdio.h>
int compareTwoString(const char* s1, const char* s2){
	while(*s1){
		if(*s1 != *s2) break;
		s1++;
		s2++;
	}
	return *s1 - *s2;
}
int main(){
	char str1[20];
	char str2[20];
	scanf("%s %s",str1,str2);

	int res = compareTwoString(str1,str2);
	if(res>0) printf("s1 > s2");
	else if(res==0) printf("s1 == s2");
	else printf("s1 < s2");
	printf("\n");
	return 0;
}
