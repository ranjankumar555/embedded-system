#include<stdio.h>
#include<stdbool.h>
void del_fun(char* s);

int main()
{
	char str[30];
	printf("enter string: ");
	scanf("%s", str);
	del_fun(str);
	printf("%s\n",str);
	return 0;
}
/*** brute force ***/
/*
void del_fun(char* s){
	int j,k;
	for(int i=0; s[i]; i++)
	{
		for(j = i+1; s[j]; j++)
		{
			if(s[j] == s[i])
			{
				for(k =j; s[k]; k++){
					s[k] = s[k+1];
				}
				j--;
			}
		}
	}
}
*/
/*** optimised ***/
void del_fun(char* s) {
    bool seen[256] = {0};  // Array to track characters seen (ASCII 0-255)
    int j = 0;  // Pointer to the current position in the string

    for (int i = 0; s[i]; i++) {
        if (!seen[(unsigned char)s[i]]) {  // If character not seen before
            s[j++] = s[i];  // Copy character to the new position
            seen[(unsigned char)s[i]] = true;  // Mark it as seen
        }
    }
    s[j] = '\0';  // Null-terminate the modified string
}
