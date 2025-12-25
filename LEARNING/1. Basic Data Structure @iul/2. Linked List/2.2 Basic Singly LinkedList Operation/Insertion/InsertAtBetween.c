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

struct node* InsertAtBetween(struct node* head,int data,int index)
{
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    struct node* p=head;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
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

    head=InsertAtBetween(head,56,1);

    Traversal(head);


}