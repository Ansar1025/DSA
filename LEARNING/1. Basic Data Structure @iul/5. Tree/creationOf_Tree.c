#include<stdio.h>
#include<stdlib.h>

//Defining a Node 
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;    
};

//Creating a NEW Node
struct Node* createNode(int value)
{
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
};

//Building a Tree
int main()
{
    struct Node* root=createNode(2);

    root->left=createNode(1);
    root->right=createNode(4);

    root->left->left=createNode(11);
    root->left->right=createNode(12);

    root->right->left=createNode(3);

 return 0;
      
}
