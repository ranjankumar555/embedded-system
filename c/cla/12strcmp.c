#include<stdio.h>
int mystrcmp(const char*, const char*);
int mystrlen(const char*);
int main(int argc, char** argv){
	if(argc!=3){
		printf("USAGE: ./a.out str str\n");
		return 1;
	}
	char* p = *(argv+1);
	char* q = *(argv+2);

	printf("len1 = %d\n",mystrlen(p));
	printf("len2 = %d\n",mystrlen(q));

	if(mystrcmp(p,q)){
		printf("Both string are not equal\n");
	}
	else{
		printf("Both string are equal\n");
	}
	return 0;
}
int mystrcmp(const char* p, const char* q){
	int i=0;
	while(*(p+i)){
		if(*(p+i) != *(q+i)){
			break;
		}
		i++;
	}
	return *(p+i) - *(q+i);
}

int mystrlen(const char* p){
	int i=0;
	while(*(p+i)){
		i++;
	}
	return i;
}
