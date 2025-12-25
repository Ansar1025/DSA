#include<stdio.h>
#include<malloc.h>

//Implementing Linked List
struct node{
    int data;
    struct node* next;
};
void traverse(struct node *ptr);
struct node *deleteatindex(struct node *xyz,int index);
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
    head=deleteatindex(head,0);

    printf("LinkedList After Deletion at the INDEX : \n");
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

struct node * deleteatindex(struct node *head,int index){
    if(index==0){
        struct node *temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    struct node* ptr=head;
    int i=0;
    while(i!=index-1&&ptr->next!=NULL){
        ptr=ptr->next;
        i++;
    }
    struct node *q=ptr->next;
    ptr->next=q->next;
    free(q);
    return head;
 }