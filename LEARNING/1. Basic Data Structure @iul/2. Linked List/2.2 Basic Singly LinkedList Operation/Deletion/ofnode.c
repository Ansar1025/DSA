#include<stdio.h>
#include<malloc.h>

//Implementing Linked List
struct node{
    int data;
    struct node* next;
};
void traverse(struct node *ptr);
struct node *deleteofnode(struct node *xyz,int data);
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
    
    printf("LinkedList Before Deletion : \n");
    traverse(head);

    //Insert at Index
    head=deleteofnode(head,8);

    printf("LinkedList After Deletion from at the end : \n");
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

struct node * deleteofnode(struct node *head,int data){
    struct node* ptr=head;
    struct node *q=head->next;
    while(q->data!=data&&q->next!=NULL){
        ptr=ptr->next;
        q=q->next;
    }
    ptr->next=q->next;
    free(q);
    return head;
 }