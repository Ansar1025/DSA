#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node* prev;
    int data;
    struct node* next;
};

int main(){
    struct node* Head;
    struct node* second;
    struct node* third;

    Head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));

    if (Head == NULL || second == NULL || third == NULL) {
        printf("Memory allocation failed\n");
        return 1; // Exit the program with an error code
    }

    Head->prev=NULL;
    Head->data=7;
    Head->next=second;

    second->prev=Head;
    second->data=8;
    second->next=third;

    third->prev=second;
    third->data=6;
    third->next=NULL;

    struct node* temp;
    temp=Head;
    printf("Forward Traversal : \n");
    while (temp!=NULL)
    {
        printf("%d -> ",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
    
    temp=third;
    printf("Backward Traversal : \n");
    while (temp!=NULL)
    {
        printf("%d -> ",temp->data);
        temp=temp->prev;
    }
    printf("NULL\n");
    
    free(Head);
    free(second);
    free(third);
    return 0;
}