#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};
struct node * CreateNewnode(int data){
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}

void printPostorder (struct node* node) 
{ 
if (node == NULL) 
return; 
printPostorder(node->left); 
printPostorder(node->right); 
printf ("%d ", node->data); 
}

int main(){
    struct node *root;
    root=CreateNewnode(1);
    root->left=CreateNewnode(2);
    root->right=CreateNewnode(3);

    root->left->left=CreateNewnode(4);
    root->left->right=CreateNewnode(5);
    root->right->left=CreateNewnode(6);
    root->right->right=CreateNewnode(7);

    printPostorder(root);
    return 0;
}