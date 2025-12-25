#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};
struct node* CreateNode(int data){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
void preOrderTraversal(struct node * ptr){
    if(ptr==NULL){
        return;
    }
    printf("%d ",ptr->data);
    preOrderTraversal(ptr->left);
    preOrderTraversal(ptr->right);
}

int main(){
    struct node *root;
    root=CreateNode(1);
    root->left=CreateNode(2);
    root->right=CreateNode(3);
    
    root->left->left=CreateNode(4);
    root->left->right=CreateNode(5);
    root->right->left=CreateNode(6);
    root->right->right=CreateNode(7);

    preOrderTraversal(root);

    return 0;
}