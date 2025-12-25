#include<stdio.h>
#include<malloc.h>

//Implementing Linked List
struct node{
    int data;
    struct node* next;
};
void traverse(struct node *ptr);
struct node *deleteatend(struct node *xyz);
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
    head=deleteatend(head);

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

struct node * deleteatend(struct node *head){
    struct node* ptr=head;
    struct node* q=ptr->next;
    while(q->next!=NULL){
        ptr=ptr->next;
        q=q->next;
    }
    ptr->next=NULL;
    free(q);
    return head;
 }