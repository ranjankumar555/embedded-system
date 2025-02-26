#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
	int rollno;
	char name[20];
	float marks;
	struct Node* next;
}Node;

void insert_begin(Node** head);
void print(Node* head);
int main(){
	
	Node* head = NULL;
	int op;
	while(1){
		printf("1) Insert at begining\n15) print linked list\n16) exit\n\n");
		printf("Enter choice: ");
		scanf("%d", &op);
		switch(op){
			case 1: insert_begin(&head); break;
			case 15: print(head); break;
			case 16: exit(0);
			default: printf("unkmown choice\n");
		}

	}

	return 0;
}
void insert_begin(Node** head){
	
	// 1. create a new node
	Node* new = (Node*)malloc(sizeof(Node));
	
	// 2. scan the data
	printf("enter rollno: ");
	scanf("%d", &new->rollno);
	printf("enter name: ");
	scanf("%s", new->name);
	printf("enter marks: ");
	scanf("%f", &new->marks);

	// 3. assign newNode->next = head;
	new->next = *head;

	// 4. update head to point newly created node(i.e. first node)
	*head = new;
}
void print(Node* head){
	if(head == NULL){
		printf("List is empty\n");
		return ;
	}
	Node* temp = head;

	printf("\nRollNo\t Name\t Marks\n");
	printf("--------------------------------------------\n");
	while(temp!=NULL){
		printf("%d\t %s\t %f\t \n",temp->rollno, temp->name, temp->marks);
	       	temp = temp->next;

	}
	printf("--------------------------------------------\n");
	printf("\n");
}


