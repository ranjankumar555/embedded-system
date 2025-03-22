#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
	int rollno;
	char name[20];
	float marks;
	struct Node* next;
}Node;

void insert_begin(Node** head);
void insert_end(Node** head);
void insertAfter(Node** head, int key);
void insertBefore(Node** head, int key);
void insertAtPos(Node** head, int pos);
void print(Node* head);
int main(){
	
	Node* head = NULL;
	int op, temp;
	while(1){
		printf("1) Insert at begining\n2) insert at end\n3) insert after rollno\n4)insert before rollno\n5) Insert at position\n15) print linked list\n16) exit\n\n");
		printf("Enter choice: ");
		scanf("%d", &op);
		switch(op){
			case 1: insert_begin(&head); break;
			case 2: insert_end(&head); break;
			
			case 3: printf("After which rollno to insert: ");
				scanf("%d", &temp);
				insertAfter(&head, temp);
				break;
			
			case 4: printf("Before which rollno to insert: ");
				scanf("%d",&temp);
				insertBefore(&head, temp);
				break;

			case 5: printf("At which position to insert: ");
				scanf("%d", &temp);
				insertAtPos(&head, temp);
				printf("\n");
				break;
				
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
	printf("\nenter rollno: ");
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

void insert_end(Node** head){
	Node* newNode, *temp;

	//create new node
	newNode = (Node*)malloc(sizeof(Node));
	
	// scan the data
        printf("\nenter rollno: ");
        scanf("%d", &newNode->rollno);
        printf("enter name: ");
        scanf("%s", newNode->name);
        printf("enter marks: ");
        scanf("%f", &newNode->marks);

	newNode->next = NULL;
	if(*head == NULL){
		*head = newNode;
		return;
	}
	temp = *head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = newNode;
}
void insertAfter(Node** head, int key){
        Node* temp, *newNode;
        temp = *head;

        while(temp!=NULL){
                if(temp->rollno == key){
                        newNode = (Node*)malloc(sizeof(Node));
                        newNode->next = temp->next;
                        temp->next = newNode;

                        printf("enter rollNo: ");
                        scanf("%d", &newNode->rollno);
                        printf("enter name: ");
                        scanf("%s", newNode->name);
                        printf("enter marks: ");
                        scanf("%f", &newNode->marks);
                        return;
                }
                temp = temp->next;
        }
        printf("\n%d is not present in the list\n", key);
}

void insertBefore(Node** head, int key){
	Node* temp, *newNode;
	if(*head == NULL){
		printf("List is empty\n");
		return;
	}
	if((*head)->rollno == key){
		newNode = (Node*)malloc(sizeof(Node));
		newNode->next = *head;
		*head = newNode;
		
		printf("enter rollNo: ");
		scanf("%d", &newNode->rollno);
		printf("enter name: ");
		scanf("%s", newNode->name);
		printf("enter marks: ");
		scanf("%f", &newNode->marks);
		return;
	}
	temp = *head;
	while(temp->next != NULL){
		if(temp->next->rollno == key){
			newNode = (Node*)malloc(sizeof(Node));
			newNode->next = temp->next;
			temp->next = newNode;

			printf("enter rollNo: ");
			scanf("%d", &newNode->rollno);
			printf("enter name: ");
			scanf("%s", newNode->name);
			printf("enter marks: ");
			scanf("%f", &newNode->marks);
			return;
		}
		temp = temp->next;
	}
	printf("\n%d rollno not present\n",key);
	
}
void insertAtPos(Node** head, int pos){
	Node* temp, *newNode;
	if(*head == NULL){
		printf("\nList is empty\n");
		return;
	}
	if(pos == 1){
		newNode = (Node*)malloc(sizeof(Node));
		newNode->next = *head;
		*head = newNode;

		printf("enter rollNo: ");
                scanf("%d", &newNode->rollno);
                printf("enter name: ");
                scanf("%s", newNode->name);
                printf("enter marks: ");
                scanf("%f", &newNode->marks);
                return;
        }
	temp = *head;
	int i=1;
	while(i<pos-1 && temp!=NULL){
		temp = temp->next;
		i++;
	}
	if(temp == NULL){
		printf("\nNot enough node to insert\n");
	}
	else{
		newNode = (Node*)malloc(sizeof(Node));
		newNode->next = temp->next;
		temp->next = newNode;

		printf("enter rollNo: ");
                scanf("%d", &newNode->rollno);
                printf("enter name: ");
                scanf("%s", newNode->name);
                printf("enter marks: ");
                scanf("%f", &newNode->marks);
	}
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
		printf("%d\t%s\t%f\t\n",temp->rollno, temp->name, temp->marks);
	       	temp = temp->next;

	}
	printf("--------------------------------------------\n");
	printf("\n");
}
