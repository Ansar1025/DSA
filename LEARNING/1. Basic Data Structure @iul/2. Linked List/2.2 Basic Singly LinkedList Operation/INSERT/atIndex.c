#include<stdio.h>
#include<malloc.h>

//Implementing Linked List
struct node{
    int data;
    struct node* next;
};
void traverse(struct node *ptr);
struct node * insertatbetween(struct node *head,int data,int index);
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
    
    //TRAVERSEING
    traverse(head);

    //Insert at Mid
    head=insertatbetween(head,99,1);
    
    traverse(head);


 return 0;
}
void traverse(struct node *ptr){
    while (ptr!=NULL)
    {
        printf("%d -> ",ptr->data);
        ptr=ptr->next;
    }
    printf("NULL\n");
       
}

struct node * insertatbetween(struct node *head,int data,int index){
    struct node *newnode,*ptr;
    newnode=(struct node*)malloc(sizeof(struct node));
    ptr=head;
    int i=0;
    while (i!=index-1 && ptr!=NULL)
    {
        ptr=ptr->next;
        i++;
    }
    newnode->data=data;
    newnode->next=ptr->next;
    ptr->next=newnode;
    return head;
}
    
