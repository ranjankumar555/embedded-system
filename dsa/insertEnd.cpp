#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node* next;
		Node(int val=0){
			data = val;
			next = nullptr;
		}
};
class SLL{
	public:
	Node* head;
	SLL(){
		head = nullptr;
	}
	void insertFront(int num){
		Node* newNode = new Node(num);
		newNode->next = head;
		head = newNode;
	}

	void insertMid(int num, int pos){
		Node* newNode = new Node(num);
		if(head == nullptr){
			insertFront(num);
		}
		Node* temp = head;
		while(--pos){
			temp = temp->next;
		}
		newNode->next = temp->next;
		temp->next = newNode;
	}
	
	void insertEnd(int data){
		Node* newNode = new Node(data);
		Node* temp = head;
		while(temp->next != nullptr){
			temp = temp->next;
		}
		temp->next = newNode;
	}

	void print(){
		Node* temp = head;
		while(temp!=nullptr){
			cout<<temp->data<<" ";
			temp = temp->next;
		}
		cout<<endl;
	}
	/* ~SLL(){
                        Node* current, *temp = head;
                        while(temp!=nullptr){
                                current = temp->next;
                                delete temp;
                                temp = current;
                        }
                } */
};
int main(){
	SLL* obj = new SLL();
	obj->insertFront(5);
	obj->insertFront(4);
	obj->insertFront(3);
	obj->insertFront(2);
	obj->insertFront(1);

	obj->insertEnd(66);
	obj->insertEnd(124);
	
	obj->insertMid(99,2);
	obj->insertMid(876,5);
	
	obj -> print();
	delete obj;
	return 0;
}
