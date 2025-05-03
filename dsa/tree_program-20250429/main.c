#include"header.h"
BST *Parent=0;
main(){
  BST *root=0,*r;
  int op,num;
  while(1){
  printf("1)insert 2)inorder 3)preorder 4)postorder 5)search 6)delete_node 7)exit\n");
  scanf("%d",&op);
  switch(op){
  case 1: printf("enter num to insert\n");
          scanf("%d",&num);
          insert(&root,num);break;
  case 2: inorder(root);break;
  case 3: preorder(root);break;
  case 4: postorder(root);break;
  case 5:printf("enter num to search\n");
          scanf("%d",&num);
          r=search(root,num);
          if(r==0) printf("NUM not found\n");
          else printf("num found\n");break;
  case 6: printf("enter num to delete\n");
          scanf("%d",&num);
            delete_node(&root,num);break;
  case 7:exit(0);
  default:printf("unknown choice\n");
  }
 }
}

void insert(BST **ptr,int n){
    
      if(*ptr==0){
        *ptr=calloc(sizeof(BST),1);
        (*ptr)->num=n;
      }
      else if( n < (*ptr)->num)
       insert(& ((*ptr)->left),n);
      else if( n > (*ptr)->num)
        insert(&((*ptr)->right),n);
      else
         printf("duplicate not allowed\n");   
}

void inorder(BST *ptr){
  if(ptr){
   inorder(ptr->left);
   printf("%d ",ptr->num);  
   inorder(ptr->right);
  }

}
void preorder(BST *ptr){
  if(ptr){
   printf("%d ",ptr->num);  
   preorder(ptr->left);
   preorder(ptr->right);
  }

}
void postorder(BST *ptr){
  if(ptr){
   postorder(ptr->left);
   postorder(ptr->right);
  printf("%d ",ptr->num); 
  }
}


BST * search(BST *ptr,int n){
  if(ptr){
    if(ptr->num == n)
      return ptr;
    else if( n < ptr->num){
     Parent=ptr;
     search( ptr->left,n);
    }  
    else if( n > ptr->num){
      Parent=ptr;
      search(ptr->right,n);
    }
    else    
       return 0;
  }
  else 
    return 0;
}

void delete_node(BST **ptr,int n){
   if(*ptr)
   {
 
       BST *del=search(*ptr,n);
        BST *p=Parent;
       if(del){
       //////// delete a node not having child
    abc: 
        if(del->left==0 && del->right==0) {       
        if(del==p->left)
          p->left=0;
        if(del==p->right)
          p->right=0;  
       
        free(del);    
         return;  
       
       }
  ///////////delete a node having one child left
    if(del->left!=0 && del->right==0){
      if(del == p->left)
       p->left=del->left;
      if(del == p->right)
       p->right=del->left;
 
         free(del);    
         return;  
       
     }
      ///////////delete a node having one child right
    if(del->left==0 && del->right!=0){
      if(del == p->left)
       p->left=del->right;
      if(del == p->right)
       p->right=del->right;
 
         free(del);    
         return;  
       
     }
     if(del->left!=0 && del->right!=0){
      BST *min;
      min=del->right;
      while(min->left){
       p=min;
       min=min->left;
      }
      del->num=min->num;
      del=min;
      goto abc;
     
     }
     
     
     
       else
         printf("NUM not found\n");
   }
   else
     printf("no records found\n");



}
















