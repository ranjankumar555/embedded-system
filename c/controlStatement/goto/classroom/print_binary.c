#include<stdio.h>
void main()
{
 int num,pos=31;

printf("Enter the number...\n");
scanf("%d",&num);
L3:
printf("%d",num>>pos&1);
pos--;
if(pos>=0)
goto L3;
printf("\n");


}
