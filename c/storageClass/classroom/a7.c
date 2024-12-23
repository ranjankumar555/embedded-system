#include<stdio.h>
int *def(void);
void main()
{
int *p;

p=def();

}
int * def(void)
{
int i=10;

return &i;
}
