#include<stdio.h>
#define max 5
int queue[max];
int rear=-1;
int front=-1;
void enqueue();
int dequeue();
void display();
int main(){
    int choice;
    printf("Queue Operation : \n");
    do{
    printf("1.Enqueue(Insertion)\n2.Dequeue(Deletion)\n3.Display\n4.EXIT\n");
    printf("Enter Your choice : ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            printf("\nOUTPUT : \n");
            enqueue();
            break;
        case 2:
            printf("\nOUTPUT : \n");
            dequeue();
            break;
        case 3:
        printf("\nOUTPUT : \n");         
        display();
            break;
        case 4:
        printf("Program Ended..\n");
            return 0;
            break;
        default:
        printf("\nOUTPUT : \n");
            printf("Invalid choice entered !!\n");
    }
}while (choice!=4);

 return 0;
}
void enqueue(){
    if(rear==max-1){
        printf("Queue Overflow !!\n\n");
    }
    else{
        int val;
        printf("Enter Value : ");
        scanf("%d",&val);
        if(front==-1&&rear==-1){
            front=rear=0;
        }
        else{
            rear++;
        }
        queue[rear]=val;
        printf("%d Inserted into Queue\n\n",val);
    }
}
int dequeue(){
    int value;
    if(front==-1||front>rear){
        printf("Queue Undeflow !\n\n");
        return -1;
    }
    else{
        value=queue[front];
        printf("%d Deleted from Queue\n\n",value);
        front++;
        if(front>rear){
            front=rear=-1;
        }
        return value;
    }
}
void display(){
    if(front==-1||front>rear){
        printf("Queue is Empty.\n\n");
    }
    else{
    printf("Queue Elements : \n");
    for (int i = front; i <=rear; i++)
    {
        printf("%d ",queue[i]);
    }
    printf("\n\n");
}
}