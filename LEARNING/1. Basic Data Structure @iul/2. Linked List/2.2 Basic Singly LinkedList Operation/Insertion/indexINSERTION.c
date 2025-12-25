#include<STDIO.H>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
void menu_bar();
void insertatbeg();
void insertatindex();
void insertatend();
void delete_at_beg();
void delete_at_index();
void delete_at_end();
int main(){
    int choice;
    do{
    menu_bar();
        printf("Enter your Choice : ");
        printf("%d",&choice);
    switch (choice)
    {
    case 1:
        insertatbeg();
        break;
    case 2:
        insertatindex();
        break;
    case 3:
        insertatend();
        break;
    case 4:
        delete_at_beg();
        break;
    case 5:
        delete_at_index();
        break;
    case 6:
        delete_at_end();
        break;
    default:
        break;
    }
    
} while (choice!=9);
   return 0;
}
void menu_bar(){
    printf("-----------------------------\n");
    printf("LINKED LIST OPERATIONS : \n");
    printf("1.Insert at Begining\n2.Insert at between\n3.Insert at End\n");
    printf("4.Delete at Begining\n5.Delete at between\n6.Delete at End\n");
    printf("7.DISPLAY\n9.EXIT\n");
}
void insertatbeg(){
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    int value;
    printf("Enter Value : ");
    scanf("%d",&value);
    temp->data=value;
    temp->next=head;
    head=temp;
    printf("Node inserted \n");
}
void insertatindex() {
    struct node *ptr, *temp;
    int item, loc, i;
    
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL) {
        printf("\nOVERFLOW");
        return;
    }
    
    printf("\nEnter value: ");
    scanf("%d", &item);
    
    printf("\nEnter location after which to insert: ");
    scanf("%d", &loc);
    
    temp = head;
    for (i = 0; i < loc - 1; i++) {
        if (temp == NULL) {
            printf("\nCan't insert\n");
            return;
        }
        temp = temp->next;
    }
    
    ptr->data = item;
    ptr->next = temp->next;
    temp->next = ptr;
    printf("\nNode inserted");
}
