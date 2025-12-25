#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

#define postfixsize 100
#define max 100

int stack[max];
int top=-1;
void push(int value);
int pop();
void EvalPostFixExp(char postfix[]);
int main(){
    int i;
    char postfix[postfixsize];
    printf("Evaluation of Postfix Expression : \n");
    printf("Assumptions : \n");
    printf("1. There is only 4 operator(+,-,/,*)\n2.Single digit operand used.\n");
    printf("3.Enter expression ( end with ')' ) : ");
    for (int i = 0; i <=postfixsize-1; i++)
    {
        scanf("%c",&postfix[i]);
        if(postfix[i]==')'){
            break;
        }
    }
    EvalPostFixExp(postfix);
    return 0;
}
void push(int value){
    if(top>=max-1){
        printf("Stack Overflow\n");
        return;
    }
    else{
        top++;
        stack[top]=value;
    }
}
int pop(){
    if (top==-1)
    {
        printf("Stack Underflow\n");
        return -1;
    }
    else{
       int item=stack[top--];
        return item;
    }
}
void EvalPostFixExp(char postfix[]){
    int i;
    char ch;
    int value,a,b;
    printf("Printing Postfix Expression...\n");
    for (int i = 0;postfix[i]!=')'; i++)
    {
        ch=postfix[i];
        if(isdigit(ch)){
            push(ch -'0');
        }
        else if(ch=='+'||ch=='-'||ch=='/'|| ch=='*')
        {
            a=pop();
            b=pop();
            switch(ch){
                case '+':
                value=b+a;
                break;
                case '-':
                value=b-a;
                break;
                case '*':
                value=b*a;
                break;
                case '/':
                value=b/a;
                break;
                default:
                printf("Invalid ");
            }
            push(value);
        }
        
    }
    printf("Result of postfix expression : %d\n",pop());
    
}