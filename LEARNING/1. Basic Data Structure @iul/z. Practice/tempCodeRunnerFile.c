#include<stdio.h>
#include<stdlib.h>
#define max 100
int top=-1;
int stack[max];
void push();
void pop();
void display();
void menu();
int main(){
    int choice,another;
    while(1){
    menu();
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        push();
        break;
    case 2:
        pop();
        break;
    case 3:
        display();
        break;
    case 4:
        return 0;
        break;
    default:
        printf("Invalid choice entered !!\n");
        break;
    }
}

    return 0;
}
void menu(){
    printf("====== STACK OPERATION =======\n");
    printf("1.Push\n2.Pop\n3.Display\n4.Exit\n");
    printf("Enter Your Choice : ");
}
void push(){
    int item;
    if(top==max-1){
        printf("Stock Overflow\n");
    }
    else
    {
        printf("Enter Number : ");
        scanf("%d",&item);
        top++;
        stack[top]=item;
        printf("%d pushed into stack\n",item);
    }
}
void pop(){
    if(top==-1){
        printf("Stack Underflow\n");
    }
    else{
        printf("%d popped from stack\n",stack[top]);
        top--;
    }
}
void display(){
    if(top==-1){
        printf("Stack is empty\n");
    }
    else{
    int i=top;
    while (i!=-1)
    {
        printf("%d  ",stack[i]);
        i--;
    }
    printf("\n");
}
}
void peek(){
    if(top==-1){
        printf("stack is empty\n");
    }
    else{
        printf("%d is top element\n",stack[top]);
    }
}