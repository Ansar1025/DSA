#include<stdio.h>
#include<stdlib.h>
struct queue{
    int size;
    int front;
    int rear;
    int *arr;
};
void dequeue(struct queue queues,int data);
int main(){
    struct queue demo;
    demo.size=8;
    demo.front=demo.rear=-1;
    demo.arr=(int *)malloc(sizeof(int));

    //Enqueue
    enqueue(demo,8);

    return 0;
}
void dequeue(struct queue queues,int data){
    
}
