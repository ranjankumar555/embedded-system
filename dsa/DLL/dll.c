#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
	struct node* prev;
};
typedef struct node dll;
void insert_begin(dll**, int);
void insert_end(dll**, int);
void insert_after(dll**, int, int);
void insert_before(dll**, int, int);
void insert_at(dll**, int);
void print(dll*);

int main(){
	dll* head = NULL;
	print(head);
	insert_end(&head, 10);
	insert_end(&head, 20);
	insert_end(&head, 30);
	insert_end(&head, 40);
	insert_end(&head, 50);
	print(head);

	printf("inserting before 10\n");
	insert_before(&head, 67, 10);
	print(head);

	printf("Inserting before 30\n");
	insert_before(&head, 77, 30);
	print(head);

	printf("inserting before 50\n");
	insert_before(&head, 87, 50);
	print(head);

	return 0;
}
void insert_begin(dll** head, int data){
	dll* newNode = malloc(sizeof(dll));
	newNode->data = data;
	newNode->prev = NULL;
	newNode->next = *head;
	if(*head == NULL){
		*head = newNode;
		return;
	}
	(*head)->prev = newNode;
	*head = newNode;
}
void insert_end(dll** head, int data){
	dll* newNode = malloc(sizeof(dll));
	newNode->data = data;
	if(*head == NULL){
		newNode->next = *head;
		newNode->prev = *head;
		*head = newNode;
		return;
	}
	dll* temp = *head;
	while(temp->next){
		temp = temp->next;
	}
	newNode->next = temp->next;
	newNode->prev = temp;
	temp->next = newNode;

}
void insert_after(dll** head, int data, int key){
	if(*head == NULL){
		printf("List is empty\n");
		return;
	}
	dll* temp = *head;
	
	while(temp){
		if(temp->data == key){
			dll* newNode = malloc(sizeof(dll));
			newNode->data = data;
			newNode->next = temp->next;
			newNode->prev = temp;
			temp->next = newNode;
			return;
		}
		temp = temp->next;
	}
	printf("%d is not available\n", key);
}

void insert_before(dll** head, int data, int key){
	if(*head == NULL){
		printf("List is empty\n");
		return;
	
	}
	if((*head)->data == key){ // before first node
		dll* newNode = malloc(sizeof(dll));
		newNode->data = data;
		newNode->next = *head;
		newNode->prev = NULL;
		(*head)->prev = newNode;
		*head = newNode;
		return;
	}
	dll* temp = *head;
	
	while(temp){
		if(temp->data == key){
			dll* newNode = malloc(sizeof(dll));
			newNode->data = data;
			newNode->next = temp;
			newNode->prev = temp->prev;
			temp->prev->next = newNode;
			temp->prev = newNode;
			return;
		}
		temp = temp->next;
	}
	printf("%d is not available\n", key);
	
}

void insert_at(dll**, int){

}

void print(dll* head){
	if(head == NULL){
		printf("List is empty\n");
	}
	dll* temp = head;
	while(temp!=NULL){
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}
	

