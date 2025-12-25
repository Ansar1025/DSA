#include<stdio.h>
#include<malloc.h>

//Implementing Linked List
struct node{
    int data;
    struct node* next;
};
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

  //  struct node *ptr=head;

    //Travesring Linked List
    for(int i=0;head!=NULL;i++){
        printf("%d->",head->data);
        head=head->next;}
    printf("NULL");
    free(head);
    free(second);
    free(third);

    return 0;
}
 