#include<stdio.h>

char* mystrcpy(char*, const char*);
char* mystrncpy(char*, const char*, int);

int main(){
  char dest[20], src[20], *p;
  printf("Enter a string: ");
  scanf("%s",src);
  p = mystrcpy(dest,src);
  printf("dest = %s\n",dest);
  printf("dest = %s\n",mystrncpy(dest,src,2));
  return 0;
}

/* index method */
/*char* mystrcpy(char *d, const char *s){
  int i;
  for(i =0; s[i]; i++){
    d[i] = s[i];
  }
  d[i] ='\0';
  return d;
}
*/

/* Pointer version */
char* mystrcpy(char* d, const char *s){
  int i=0;
  while(*(s+i)){
    *(d+i) = *(s+i);
    i++;
  }
  return d;
}
/* index method */
/*char* mystrncpy(char *d, const char* s, int n){
  int i;
  for(i=0; i<n; i++){
    d[i] = s[i];
  }
  d[i]= '\0';
  return d;
}
*/

char* mystrncpy(char *d, const char* s, int n){
  int i;
  for(i=0; i<n; i++){
    *(d+i) = *(s+i);
  }
  *(d+i) = '\0';
  return d;
}