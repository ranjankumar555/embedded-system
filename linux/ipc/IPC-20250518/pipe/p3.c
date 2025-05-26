#include"header.h"
void convert(char *p)
{
int i;
for(i=0;p[i];i++)
if(p[i]>='a' && p[i]<='z')
p[i]=p[i]-32;

}
void main()
{
int p[2],q[2];
pipe(p);
pipe(q);

if(fork()==0)
{
char s[10];
printf("In c before read...\n");
read(p[0],s,sizeof(s));
convert(s);
write(q[1],s,strlen(s)+1);
}
else
{
char s[10];
printf("In P Enter the data...\n");
scanf("%s",s);
write(p[1],s,strlen(s)+1);
read(q[0],s,sizeof(s));
printf("In P converted data= %s\n",s);

}




}
