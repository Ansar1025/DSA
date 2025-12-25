#include<stdio.h>
#include<stdlib.h>
#define max 5
int queue[max];
int rear=-1;
int front=-1;
void enqueue();
int dequeue();
void display();
void menu();
int main(){
    int choice;
    do{
    menu();
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
    default:
        break;
    }
}while (choice!=4);
    return 0;
}
void enqueue(){
    if(rear==max-1){
        printf("Queue Overflow\n");
    }
    else{
        int value;
        printf("Enter Value : ");
        scanf("%d",&value);
        if(front==-1&&rear==-1){
            front=rear=0;
        }
        else{
            rear++;
        }
       
    queue[rear]=value;
    printf("%d Inserted into Queue\n",value);
    }
}
int dequeue(){
    if(front==rear||front>rear)
    {
        printf("Queue Underflow\n");
        return -1;
    }
    else{
        int item;
        item=queue[front];
        front++;
        printf("%d Deleted from Queue\n",item);
        return item;
        if(front>rear){
            front=rear=-1;
        }
    }
}
void display(){
    if(front==-1||front>rear){
        printf("Queue is Empty\n");
    }
    else{
        for(int i=front;i<=rear;i++){
            printf("%d ",queue[i]);
        }
    }
}