#include<stdio.h>
#include<malloc.h>

//Implementing Linked List
struct node{
    int data;
    struct node* next;
};
void traverse(struct node *ptr);
struct node * afteranode(struct node *head,struct node * prevnode,int data);
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
    
    printf("LinkedList Before Insertion : \n");
    traverse(head);

    //Insert at Index
    head=afteranode(head,second,999);

    printf("LinkedList After Insertion after a node : \n");
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

struct node * afteranode(struct node *head,struct node *prevnode,int data){
    struct node * ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=prevnode->next;
    prevnode->next=ptr;
    return head;
}