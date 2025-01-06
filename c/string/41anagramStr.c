/* Approach
 * 1. string comparing
 * 2. sorting
 * 3. bitwise xor
 * 4. freqency array
 */
#include<stdio.h>
int isAnagram(char*, char*);
void mystrcpy(char*, char*);
int mystrlen(char*);

int main(int argc, char** argv){
	if(argc != 3){
		printf("USAGE: %s <string1> <string2> \n",argv[0]);
		return 1;
	}
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
int isAnagram(char* str1, char* str2)
{
	int len1 = mystrlen(str1);
	int len2 = mystrlen(str2);

	if(len1 != len2){
		return 0;
	}
	int i,j,count = 0;
	for(i=0; str1[i]; i++){
		for(j = 0; str2[j]; j++){
			if(str1[i] == str2[j]){
				count++;
				mystrcpy(str2+j, str2+j+1);
				break;

			}
		}
		if(count != 1)
			return 0;
		count = 0;
	}

	return 1;
}

void mystrcpy(char* d, char* s){
	while(*s){
		*d = *s;
		d++;
		s++;
	}
	*d = '\0';
}

int mystrlen(char* p){
	int i=0;
	while(*(p+i)){
		i++;
	}
	return i;
}
