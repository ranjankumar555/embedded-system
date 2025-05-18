#include<stdio.h>
#include<stdlib.h>
#define size 5

int TOP=-1;
int que[size];
void enqueue();
void dequeue();
void display();

int main(){
 int op;
  while(1){
  printf("Enter Your choice\n");
  printf("1)enqueue 2)dequeue 3)display 4)exit\n");
  scanf("%d",&op);

  switch(op){
  case 1: enqueue();break;
  case 2: dequeue();break;
  case 3: display();break;
  case 4: exit(0);
  default: printf("Unknown choice\n");
  }
  }
}

void enqueue(){
   if(TOP>=size-1){
    printf("queue is overflow\n");
    return;
   }
   printf("enter num\n");
   scanf("%d",&que[++TOP]);
}
void dequeue(){
  if(TOP<=-1){
   printf("queue is underflow\n");
   return;
  }
   printf("\033[32m deleted num: %d\n\033[0m",que[0]);
   int i;
   for(i=0;i<TOP;i++)
   que[i]=que[i+1];
   TOP--;
}

void display(){
 int i;
 system("clear");
 printf("\n****************\n");
 if(TOP<=-1){
   printf("queue is Empty\n");
   return;
  }
 for(i=0;i<=TOP;i++)
 printf("%d ",que[i]);
 printf("\n****************\n");
}
















