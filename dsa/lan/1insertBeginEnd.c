#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node* next;
};

typedef struct Node sll;
void insertBegin(sll** head, int data);
void insertEnd(sll** head, int data);
void printNode(sll* head);

int main(){
	sll* head = NULL;
	printNode(head);

	printf("\nInsert at begin:-\n");
	insertBegin(&head, 10);
	insertBegin(&head, 20);
	insertBegin(&head, 30);
	insertBegin(&head, 40);
	insertBegin(&head, 50);
	
	printNode(head);
	
	printf("\nInsert at  end:- \n");
	insertEnd(&head, 20);
	insertEnd(&head, 30);
	insertEnd(&head, 40);
	insertEnd(&head, 50);

	printNode(head);
	
	printf("\n");
	return 0;


}

void insertBegin(sll** head, int data){
	sll* newNode = malloc(sizeof(sll));
	newNode->data = data;
	newNode->next = *head;
	*head = newNode;
}

void insertEnd(sll** head, int data){
	sll* newNode = malloc(sizeof(sll));
	newNode->data = data;
	
	if(*head == NULL){
		newNode->next = *head;
		*head = newNode;
		return;
	}
	
	sll* temp = *head;
	while(temp->next){
		temp = temp->next;
	}
	
	temp->next = newNode;
	newNode->next = NULL;
	
}
void printNode(sll* head){
	if(head==NULL){
		printf("List is empty\n");
		return;
	}
	sll* temp = head;
	while(temp!=NULL){
		printf("%d ", temp->data);
		temp = temp->next;
	}

}
