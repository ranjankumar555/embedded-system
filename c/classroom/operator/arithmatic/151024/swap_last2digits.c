#include<stdio.h>
void main()
{
int num,r,r1;
printf("Enter the 4 digit number...\n");
scanf("%d",&num);
printf("Before num=%d\n",num);

r=num%10;
num=num/10;
r1=num%10;
num=num/10;
num=num*10+r;
num=num*10+r1;
printf("After num=%d\n",num);

}
