#include<stdio.h>
#include<stdlib.h>
typedef struct SLL{
	int data;
	struct SLL* next;
}sll;
void insert(sll** head, int data){
	sll* newNode = (sll*)malloc(sizeof(sll));
	newNode->data = data;
	newNode->next = *head;
	*head = newNode;
}
void print(sll* head){
	if(head == NULL){
		printf("list is empty\n");
		return;
	}
	while(head){
		printf("%d ", head->data);
		head = head->next;
	}
	printf("\n");
}
void checkPalin(sll* head){
	int c = 0;
	sll* temp = head;
	while(temp){
		c++;
		temp = temp->next;
	}
	int *arr = (int*)malloc(sizeof(int)*c);
	
	temp = head;
	int i =0;
	while(temp){
		arr[i++] = temp->data;
		temp = temp->next;
	}
	int j = c-1;
	for(i = 0; i<j; i++, j--){
		if(arr[i] != arr[j]){
			printf("list not palindrome\n");
			return;
		}
	}
	printf("list is palindrome\n");
}
int main(){
	sll* head = NULL;
	insert(&head, 1);
	insert(&head, 2);
	insert(&head, 9);
	insert(&head, 1);

	print(head);
	checkPalin(head);
	return 0;
}

