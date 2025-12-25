#include<stdio.h>
#include<stdlib.h> 
struct queue
{
    int size;
    int front;
    int rear;
    int *arr;
};
int main(){
    struct queue demo;
        demo.size=9;
        demo.front=demo.rear=-1;
        demo.arr=(int *)malloc(sizeof(int));
    

    return 0;
}
