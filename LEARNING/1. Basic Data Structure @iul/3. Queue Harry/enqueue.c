#include<stdio.h>
#include<stdlib.h>
struct queue{
    int size;
    int front;
    int rear;
    int *arr;
};
void enqueue(struct queue queues,int data);
int main(){
    struct queue demo;
    demo.size=8;
    demo.front=demo.rear=-1;
    demo.arr=(int *)malloc(sizeof(int));

    //Enqueue
    enqueue(demo,8);

    return 0;
}
void enqueue(struct queue queues,int data){
    if(queues.size==9){
        printf("Queue Overflow !!\n");
    }
    else{
        queues.rear=queues.rear++;
        queues.arr[queues.rear]=data;

    }
}
