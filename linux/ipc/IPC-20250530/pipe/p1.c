#include"header.h"
void main()
{
int p[2];
pipe(p);
perror("pipe");

if(fork()==0)
{
char s[10];
printf("In c before read...\n");
read(p[0],s,sizeof(s));
printf("In c after read %s\n",s);
}
else
{
char s[10];
printf("In P Enter the data...\n");
scanf("%s",s);
write(p[1],s,strlen(s)+1);
perror("In p write");

}




}
