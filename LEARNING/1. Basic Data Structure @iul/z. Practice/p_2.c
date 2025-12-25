#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next; 
};
struct node *head,*second,*third;
void insertatBeg();
void traversal(struct node* xyz);
int main()
{
   
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    head->data=7;
    head->next=second;
    second->data=8;
    second->next=third;
    third->data=6;
    third->next=NULL;
    traversal(head);
    insertatBeg();
    traversal(head);

    return 0;
}

void traversal(struct node* ptr){
    struct node* xyz=ptr;
    if(xyz==NULL){
        printf("Underflow Traversal Failed\n");
        return ;
    }
    while (xyz!=NULL)
    {
        printf("%d ->",xyz->data);
        xyz=xyz->next;
    }
    printf("NULL\n");
}

void insertatBeg(){
    struct node * ptr;
    int item;
    ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL){
        printf("Overlow\n");
        return;
    }
    printf("Enter value : ");
    scanf("%d",&item);
    ptr->data=item;
    ptr->next=head;
    head=ptr;
}