
#include<stdio.h>
#include<malloc.h>

//Implementing Linked List
struct node{
    int data;
    struct node* next;
};
//Initialize LinkedList
struct node *head;
struct node *second;
struct node *third;
struct node * insertatbeg(struct node *head,int data){
    struct node *newdata;
    newdata=(struct node*)malloc(sizeof(struct node));
    newdata->data=data;
    newdata->next=head;
    head=newdata;
    return head;
}

void display() {
    struct node *ptr;
    ptr = head;
    
    if (ptr == NULL) {
        printf("\nNothing to print\n");
        return;
    }
    
    printf("\nPrinting values:\n");
    while (ptr != NULL) {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}


int main()
{
    

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


    insertatbeg(head,0);

    display();

    free(head);
    free(second);
    free(third);

    return 0;
}
 