#include<stdio.h>
#include<malloc.h>

//Implementing Linked List
struct node{
    int data;
    struct node* next;
};
void traverse(struct node *head);
struct node * insertatbeg(struct node *phead,int data);
int main()
{
    //Initialize LinkedList
    struct node *head;
    struct node *second;
    struct node *third;

    //Allocate memory in heap
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));

    //Linked first Node
    (*head).data=7;
    head->next=second;

    //Linked Second Node
    second->data=8;
    second->next=third;

    //Linked Third Node
    third->data=6;
    third->next=NULL;

    traverse(head);

    //Insert at begining
    head=insertatbeg(head,0);

    traverse(head);
    

    return 0;
}
void traverse(struct node* head){
    while (head!=NULL)
    {
        printf(" %d->",head->data);
        head=head->next;
    }
    printf("NULL\n");
}
struct node* insertatbeg(struct node * head,int data){
    struct node * newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=head;
    head=newnode;
    return head;
}