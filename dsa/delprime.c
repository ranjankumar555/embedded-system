#include<stdio.h>
#include<stdlib.h>
typedef struct node{

	int data;
	struct node* next;
}node;
int isPrime(int);
void delprime(node**);
void addNode(node**, int);
void print(node*);

int main(){
	
	int i;
	node* head = NULL;
	FILE* fp = fopen("stu.txt", "r");
	while(fscanf(fp, "%d", &i)==1){
		addNode(&head, i);
	}
	print(head);
	delprime(&head);
	print(head);
	return 0;
}
void delprime(node** head){
	if(*head == NULL){
		printf("list is empty\n");
		return;
	}

	node* cur = *head;
	node* prev = *head;
	while(cur){

		if(isPrime((*head)->data)){
			prev = *head;
			*head = (*head)->next;
			free(prev);
			cur = *head;
		}
		else if(isPrime(cur->data)){
			prev->next = cur->next;
			free(cur);
			cur = prev;

		}
		prev = cur;
		cur  = cur->next;
			
	}
}
void addNode(node** head, int data){
	
	node* newNode = malloc(sizeof(node));
	newNode->data = data;
	if(*head == NULL){
		newNode->next = NULL;	
		*head = newNode;
		return;
	}
	node* temp = *head;
	while(temp->next){
		temp = temp->next;
	}	
	
	newNode->next = temp->next;
	temp->next = newNode;


}
void print(node* head){
	if(head == NULL){
		printf("List is empty\n");
		return;
	}
	while(head){
		printf("%d ", head->data);
		head = head->next;
	}
	printf("\n");
}
int isPrime(int num){
	int i;
	for(i=2; i<num; i++){
		if(num%i==0){
			break;
		}
	}
	if(i==num)
		return 1;
	
	return 0;
}
