#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>

typedef struct Tree
{
 struct Tree *left;
 int num;
 struct Tree *right;
}BST;

void insert(BST **,int);
BST* search(BST *,int);
void delete_node(BST **,int);
void inorder(BST *);
void preorder(BST *);
void postorder(BST *);









