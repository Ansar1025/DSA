#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main(){
    struct node *root;
    root=(struct node*)malloc(sizeof(struct node));
    struct node *second;
    second=(struct node*)malloc(sizeof(struct node));
    struct node *third;
    third=(struct node*)malloc(sizeof(struct node));

    root->data=1;
    root->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=NULL;

    return 0;
}