#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
};
struct node * head=NULL;
void insertatBeg();/*
void insertatLast();
void insertatRandom();
void deleteatBeg();
void deleteatLast();
void deleteatRandom();
void display();
void search();*/
int main()
{
    int choice=0;
    while (choice!=9)
    {
        printf("\t===========Main Menu ===========\n");
        printf("Choose one of the following : \n");
        printf("1. Insert at Begining\n2.Insert at Last\n3.Insert at Random\n");
        printf("4. Delete at Begining\n5. Delete at Last\n6.Delete at Random\n");
        printf("7. Display\n8. Search\n9.EXIT\n");
        printf("Enter Your Choice : ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            insertatBeg();
            break;
    /*    case 2:
            insertatLast();
            break;
        case 3:
            insertatRandom();
            break;
        case 4:
            deleteatBeg();
            break;
        case 5:
            deleteatLast();
            break;
        case 6:
            deleteatRandom();
            break;
        case 7:
            display();
            break;
        case 8:
            search();
            break;
        case 9:
            return 0;
            break;
      */  default: 
        printf("Please enter a valid choice..");
        }
    }
    
 return 0;
}

void insertatBeg() {
    struct node *ptr;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL) {
    
        printf("\nOVERFLOW");
        return;
    }
    printf("\nEnter value: ");
    scanf("%d", &item);
    ptr->data = item;
    ptr->next = head;
    head = ptr;
    printf("\nNode inserted");
 }