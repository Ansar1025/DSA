#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node* prev;
    int data;
    struct node* next;
};

int main(){
    struct node* Head;
    struct node* second;
    struct node* third;

    Head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));

    Head->prev=NULL;
    Head->data=7;
    Head->next=second;

    second->prev=Head;
    second->data=8;
    second->next=third;

    third->prev=second;
    third->data=6;
    third->next=NULL;


    return 0;
}