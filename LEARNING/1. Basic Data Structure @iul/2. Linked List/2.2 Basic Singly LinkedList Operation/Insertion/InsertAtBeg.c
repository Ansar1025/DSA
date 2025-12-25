#include<stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node * next;
};

void Traversal(struct node* xyz){
    while (xyz!=NULL)
    {
    printf("%d->",xyz->data);
    xyz=xyz->next;
}
printf("NULL\n");
}

struct node* InsertAtBeg(struct node* head,int data)
{
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
};

int main()
{
    struct node *head,*second,*third;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    
    head->data=7;
    head->next=second;
    second->data=8;
    second->next=third;
    third->data=6;
    third->next=NULL;

  //  struct node * temp=head;
    Traversal(head);

    head=InsertAtBeg(head,56);

    Traversal(head);


}