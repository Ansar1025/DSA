#include<stdio.h>
#include<malloc.h>
typedef struct node
{
    int data;
    struct node* next;
}single;

int main()
{
    single *head,*second,*third;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));

    head->data=7;
    head->next=second;
    second->data=8;
    second->next=third;
    third->data=6;
    third->next=NULL;

    struct node *trav;
    trav=head;
    while (trav!=NULL)
    {
        printf(" %d ->",trav->data);
        trav=trav->next;
    }
    printf("NULL\n");
    

    return 0;
}