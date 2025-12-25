#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* left;
    struct node * right;
};
struct node * createNewnode(int data){
    struct node* ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->left=NULL;
    ptr->right=NULL;
    return ptr;
}
void InOrderTraversal(struct node *ptr){
    if(ptr==NULL){
        return;
    }
    InOrderTraversal(ptr->left);
    printf("%d ",ptr->data);
    InOrderTraversal(ptr->right);
}
int main(){
    struct node *root;

    root=createNewnode(1);
    root->left=createNewnode(2);
    root->right=createNewnode(3);

    root->left->left=createNewnode(4);
    root->left->right=createNewnode(5);

    root->right->left=createNewnode(6);
    root->right->right=createNewnode(7);

    InOrderTraversal(root);

    return 0;
}