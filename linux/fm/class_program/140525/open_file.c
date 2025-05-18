#include"header.h"

void main()
{
FILE *fp=fopen("data","r");
int fd=open("data",O_RDONLY);
/////////////////////////////

FILE *fp=fopen("data","w");
int fd=open("data",O_WRONLY|O_CREAT|O_TRUNC,0664);


FILE *fp=fopen("data","a");
int fd=open("data",O_WRONLY|O_CREAT|O_APPEND,0664);

FILE *fp=fopen("data","a+");
int fd=open("data",O_RDWR|O_CREAT|O_APPEND,0664);

}
