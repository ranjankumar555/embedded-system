#include"header.h"
int main()
{
	SLL *headptr=0;
	int op,c;
	while(1){
		printf("\033[32m My Dear! Enter Beautiful Choice\n");
		printf("1)add_begin 2)add_middle 3)add_end 4)print_node 5)count_node 6)save_file 7)read_file 8)reverse_print 9)print_rec 10)reverse_rec 11)delete_all 12)delete_node 13)search_node 14)sort_data 15)reverse_links 16)exit\033[0m\n");
		scanf("%d",&op); 
		switch(op){
			case 1: add_begin(&headptr);break;
			case 2: add_middle(&headptr);break;
			case 3: add_end(&headptr);break;
			case 4: print_node(headptr);break;
			case 5: c=count_node(headptr);
				printf("Total count:%d\n",c);break;
			case 6: save_file(headptr);break;
			case 7: read_file(&headptr);break;
			case 8: reverse_print(headptr);break;
			case 9: print_rec(headptr);break;
			case 10: reverse_rec(headptr);break;
			case 11: delete_all(&headptr);break;
			case 12: delete_node(&headptr);break;
			case 13:  
			case 16:exit(0);
			default: printf("\033[31;4;5m My Dear!Wrong choice\033[0m\n");
		}
	}
}

void reverse_links(SLL **ptr){

        if(*ptr==0){
		printf("No records found\n");
		return;
	}
    int c=count_node(*ptr); // finding node count
    SLL **p,*temp=*ptr;
    if(c>1){
    p=malloc(sizeof(SLL*)*c);
     int i=0;
     while(temp){
      p[i++]=temp;
      temp=temp->next;
     }
 ////////////// change link position
   
   for(i=1;i<c;i++)
    p[i]->next=p[i-1];
    
    p[0]->next=0; // update first node next addr
    *ptr=p[c-1]; // update headptr
 }
}


void delete_node(SLL**ptr){

	if(*ptr==0){
		printf("No records found\n");
		return;
	}
	int num;
	printf("enter num to delete\n");
	scanf("%d",&num);

	SLL *del=*ptr,*prev; //started from first pos
	while(del){
		if(num == del->rollno){ // if num found 
			if(del == *ptr)  //if first pos
				*ptr=del->next;
			else //if middle/last pos
				prev->next=del->next;

			free(del); //delete a node
			return ;
		}
		prev=del; // follow del one step back
		del=del->next; //visit next node
	}
	printf("Rollnum  not found\n");
}


void sort_data(SLL *ptr){
	if(ptr==0){
		printf("No records found\n");
		return;
	}
	SLL *p1=ptr,*p2,temp;
	int i,j,c=count_node(ptr); // count nodes
	for(i=0;i<c-1;i++){
		p2=p1->next;
		for(j=0;j<c-1-i;j++){
			if(p1->rollno > p2->rollno){
				temp.rollno=p1->rollno;
				strcpy(temp.name,p1->name);
				temp.marks=p1->marks;

				p1->rollno=p2->rollno;
				strcpy(p1->name,p2->name);
				p1->marks=p2->marks;

				p2->rollno=temp.rollno;
				strcpy(p2->name,temp.name);
				p2->marks=temp.marks;
			}
			p2=p2->next; 
		}
		p1=p1->next;
	}
}




void search_node(SLL *ptr){
	if(ptr==0){
		printf("No records found\n");
		return;
	}
	char s[20];
	printf("Enter Name to search\n");
	scanf("%s",s);
	int flag=0;
	while(ptr){
		if(strcmp(s,ptr->name)==0){
			printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);
			flag=1;
		}

		ptr=ptr->next;
	}
	if(flag==0)
		printf("Name not found \n");

}

////////////// deleet all the nodes 
void delete_all(SLL **ptr){
	if(*ptr==0){
		printf("NO records found\n");
		return;
	}
	SLL *del=*ptr; // started from first node
	int c=1;
	while(del){
		*ptr=del->next; //update headptr
		free(del); //delete a node
		sleep(1); // delay 1 sec
		printf("deleted Node:%d\n",c++);
		del=*ptr; //holding first node addr
	}
	printf("All the nodes deleted\n");
}

void print_rec(SLL *head){
	if(head){
		printf("%d %s %f\n",head->rollno,head->name,head->marks);
		if(head->next)
			print_rec(head->next);
	}
	else
		printf("NO records found\n");
}

void reverse_rec(SLL *head){
	if(head){
		if(head->next)
			reverse_rec(head->next);
		printf("%d %s %f\n",head->rollno,head->name,head->marks);
	}
	else
		printf("NO records found\n");
}

void reverse_print(SLL *head){
	if(head==0){
		printf("No records found\n");
		return ;
	}
	SLL *temp;
	int i,j,c=count_node(head); // finding the count 
	for(i=0;i<c;i++){
		temp=head; //always starts from 1st position
		for(j=0;j<c-1-i;j++)
			temp=temp->next; //visit to particular position

		printf("%d %s %f\n",temp->rollno,temp->name,temp->marks); 
	}
}


/////////// add_at middle 
////////// add the node in b/w other nodes
///////// add the nodes according to sorting order
void add_middle(SLL **head){
	SLL *new,*last;
	new=malloc(sizeof(SLL)); //create a node
	printf("My dear! enter rollno name and marks\n");
	scanf("%d%s%f",&new->rollno,new->name,&new->marks);
	if((*head==0) || (new->rollno < (*head)->rollno)){
		new->next=*head;
		*head=new;
	}
	else
	{
		last=*head;
		while((last->next!=0) && (new->rollno > last->next->rollno)) 
			last=last->next;

		new->next=last->next;
		last->next=new;

	}
}

/********  add a node always at last position

  1.create a node
  2.scan the data 
  3.newly created node next addr always 0
  4.if  no records present then update headptr
  5. If nodes present then update last node next addr
 *****************/
void add_end(SLL **head){
	SLL *new,*last;
	new=malloc(sizeof(SLL)); //create a node 
	printf("enter rollno name and marks\n");
	scanf("%d%s%f",&new->rollno,new->name,&new->marks);

	new->next=0 ; // always zero
	if(*head==0) // if no records found then
		*head=new; // update headptr
	else{
		last=*head; //started from first position
		while(last->next) //finding last node 
			last=last->next; //visit next addr

		last->next=new; // updated last node next addr
	}
}

void read_file(SLL **head){
	SLL *new,*last;
	FILE *fp;
	fp=fopen("std.txt","r");
	if(fp==0){
		printf("Data base not present\n");
		return;
	}

	while(1){
		new=malloc(sizeof(SLL)); //create a node 
		if(fscanf(fp,"%d%s%f",&new->rollno,new->name,&new->marks)==-1)
			break;

		new->next=0 ; // always zero
		if(*head==0) // if no records found then
			*head=new; // update headptr
		else{
			last=*head; //started from first position
			while(last->next) //finding last node 
				last=last->next; //visit next addr

			last->next=new; // updated last node next addr
		}
	}
}



/// always add a node at first position
/************** 
  1 .create a node 
  2.scan the data
  3. update newly created node next addr
  4.update headptr
 *******************/
void add_begin(SLL **head){
	SLL *new;
	new=malloc(sizeof(SLL)); //create a node 
	printf("enter rollno name and marks\n");
	scanf("%d%s%f",&new->rollno,new->name,&new->marks);

	new->next=*head; // update newly created node next addr
	*head=new;  // update headptr
}

/////////////////printing all the nodes
void print_node(SLL *head){
	printf("\033[35m ************************\n"); 
	if(head==0){
		printf("My Dear! NO records found\n");
		return ;
	} 
	while(head){
		printf("%d %s %f\n",head->rollno,head->name,head->marks);
		head=head->next;
	}
	printf("************************\033[0m\n");
}
/////////////////counting  all the nodes
int count_node(SLL *head){
	int c=0;
	while(head){
		c++;
		head=head->next;
	}
	return c;
}

/////////////////save  all the nodes in file
void save_file(SLL *head){
	printf("\033[35m ************************\n"); 
	if(head==0){
		printf("My Dear! NO records found\n");
		return ;
	} 
	FILE *fp;
	fp=fopen("std.txt","w");
	while(head){
		fprintf(fp,"%d %s %f\n",head->rollno,head->name,head->marks);
		head=head->next;
	}
	fclose(fp);
	printf("Data saved in a file \n");
	printf("************************\033[0m\n");
}



