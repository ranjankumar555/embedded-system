#include<stdio.h>
int main(){
	char a[20], b[20];
	printf("Enter string: ");
	scanf("%s",a);
	int i,j=0;
	for(i=0; a[i]; i++){
		if(a[i] >= 'A' && a[i] <= 'Z'){
			a[i] = a[i]^32;
		}
		if(a[i]!='a' && a[i] != 'e' && a[i] != 'i' && a[i] != 'o' && a[i] != 'u'){
			b[j++] = a[i];
		}
	}
	b[i] = '\0';

	printf("b = %s\n", b);
	return 0;
}
