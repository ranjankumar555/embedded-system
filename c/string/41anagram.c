#include<stdio.h>
int isAnagram(const char*, const char*);
void mystrcpy(char* d, char* s);
int mystrlen(char*);
int main(int argc, char **argv){

	char* s1 = argv[1];
	char* s2 = argv[2];

	if(isAnagram(s1,s2)){
		printf("yes, Anagram\n");
	}
	else{
		printf("Not, Anagram\n");
	}

	return 0;
}

int isAnagram(const char* str1, const char* str2){
	int len1  = mystrlen(str1);
	int len2  = mystrlen(str2);

	if(len1 == len2){
		int i, j;
		int count = 0;
		for(i=0; str1[i]; i++){
			for(j =0; str2[j]; j++){
				if(str1[i] == str[j]){
					count++;
					mystrcpy(j,j+1);
					j--;
				}
			}
			if(count != 1){
				return 0;
			}
			count = 0;
		}
	}
	else{
		return 0;
	}
	return 1;
}

