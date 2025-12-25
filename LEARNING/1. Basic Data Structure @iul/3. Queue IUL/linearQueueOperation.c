#include<stdio.h>
#include<stdlib.h>
#define max 5

int queue[max];
int front=-1;
int rear=-1;

void enqueue();
int dequeue();
void display();

int main(){
    int choice;
    int value;
    do
    {
        printf("Queue Operattion : \n");
        printf("1.Enqueue(Insertion)\n2.Dequeue(Deletion)\n3.Display\n4.Exit\n");
        printf("Enter Your Choice : ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            return 0;
            break;
        default:
            printf("Invalid choice entered !!\n");
        }
    }
    while(choice!=4);
    return 0;
}
void enqueue(){
    if (rear==max-1)
    {
        printf("Queue Overflow!\n\n");
    }
    else{
        int num;
        printf("Enter value to enqueue(Insert) : ");
        scanf("%d",&num);
        if(rear==-1&&front==-1){
            rear=0;
            front=0;
        }
        else{
            rear++;
        }
        queue[rear]=num;
        printf("%d Inserted in Queue\n\n",num);
    }   
}
int dequeue(){
    int value;
    if(front==-1||front>rear){
        printf(" Queue Underflow\n\n");
        return -1;
    }
    else{
        value=queue[front];
        printf("Deleted value: %d\n\n", value);
        front++;

        if(front>rear){
            front=rear=-1;
        }
        return value;
    }
}

void display(){
    if(front==-1||front>rear){
        printf("Queue is Empty \n\n");
        return;
    }
    printf("Queue Elements : \n");
    for (int i = front; i <= rear; i++)
    {
        printf("%d ",queue[i]);
    }
    printf("\n");
}
