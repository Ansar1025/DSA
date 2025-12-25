#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
};
void traverse(struct node *ptr);
struct node * insertatbeg(struct node* head,int data);
int main(){
    struct node* head,*second,*third;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    head->data=1;
    head->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=NULL;

    traverse(head);

    head=insertatbeg(head,0);

    traverse(head);


    free(head);
    free(second);
    free(third);

    return 0;
}
void traverse(struct node * ptr){
    while (ptr!=NULL)
    {
        printf(" %d -> ",ptr->data);
        ptr=ptr->next;
    }
    printf("NULL\n");
}
struct node* insertatbeg(struct node* head,int data){
    struct node * newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=head;
    head=newnode;
    return head;
}
