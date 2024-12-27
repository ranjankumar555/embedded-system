#include<stdio.h>
int main(){
  static int i=0;
  printf("hello...\n");
  i++;
  if(i<3)
  main();

  printf("hai..\n");
  printf("hai..\n");
  printf("hai..\n");
  printf("hai..\n");

  return 0;
}