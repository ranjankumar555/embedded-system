#include<stdio.h>
#include<stdlib.h>
#define size 5

int TOP=-1;
int stk[size];
void push();
void pop();
void display();

int main(){
 int op;
  while(1){
  printf("Enter Your choice\n");
  printf("1)push 2)pop 3)display 4)exit\n");
  scanf("%d",&op);

  switch(op){
  case 1: push();break;
  case 2: pop();break;
  case 3: display();break;
  case 4: exit(0);
  default: printf("Unknown choice\n");
  }
  }
}

void push(){
   if(TOP>=size-1){
    printf("Stack is overflow\n");
    return;
   }

   printf("enter num\n");
   scanf("%d",&stk[++TOP]);
}
void pop(){
  if(TOP<=-1){
   printf("stack is underflow\n");
   return;
  }
   printf("\033[32m deleted num: %d\n\033[0m",stk[TOP--]);
}

void display(){
 int i;
 system("clear");
 printf("\n****************\n");
 if(TOP<=-1){
   printf("stack is Empty\n");
   return;
  }
 for(i=0;i<=TOP;i++)
 printf("%d ",stk[i]);
 printf("\n****************\n");


}
















