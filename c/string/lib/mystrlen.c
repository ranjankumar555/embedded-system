#include<stdio.h>
const int mystrlen(const char*);
int main(){
  char str[] = "VectorIndia";
  int len  = mystrlen(str);
  printf("Length of %s is %d\n",str, len);
  return 0;
}

// Array/index method
/*
int mystrlen(char s*){
  int i;
  for(i=0; s[i]; i++);
  return i;
}
*/

// pointer method
const int mystrlen(const char *s){
  int c=0;
  while(*s++) //for(c=0; *s; s++, c++);
  {
    c++;
    //s++;
  }
  return c;
}