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
    bool visit[256] = {0};  
    int j = 0;  

    for (int i = 0; s[i]; i++) {
        if (!visit[(unsigned char)s[i]]) {  
            s[j++] = s[i];  
            visit[(unsigned char)s[i]] = true;  
        }
    }
    s[j] = '\0';  
}
