#include <stdio.h>
void capitalize(char *);

int main()
{
	char s[30];
	int flag = 1;

	printf("Enter string: ");
	scanf("%[^\n]s", s);

	char *p = s;

	while (*p)
	{

		if (flag)
		{
			capitalize(p);
			flag = 0;
		}
		if (*p == ' ')
		{
			flag = 1;
		}
		p++;
	}
	printf("str = %s\n", s);
	return 0;
}
void capitalize(char *str)
{
	if (*str >= 'a' && *str <= 'z')
	{
		*str = *str ^ 32;
	}
}
