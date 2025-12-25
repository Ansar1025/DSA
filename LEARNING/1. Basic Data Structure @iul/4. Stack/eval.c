#include<stdio.h>
#include<ctype.h>
#define max 100
#define postfixsize 100
int stack[max];
int top=-1;
void push(int value);
int pop();
void evalpostfix(char postfix[]);
void menu();
int main(){
    int i;
    char postfix[postfixsize];
    menu();
    for (int i = 0; i <= postfixsize-1; i++)
    {
        scanf("%c",&postfix[i]);
        if(postfix[i]==')'){
            break;
        }
    }
    evalpostfix(postfix);
    
    return 0;
}
void menu(){
    printf("Assumptions : \n");
    printf("1. Only 4 Operands(+,-,*,/)\n2. Single digit Operands are used\n3. Enter expressio & end with ')' : ");
}
void push(int item){
    if(top>=max-1){
        printf("Overflow\n");
        return;
    }
    else{
        stack[++top]=item;
    }
}
int pop(){
    int item;
    if(top<0){
        printf("Underflow\n");
        return -1;
    }
    else{
        item=stack[top--];
        return item;
    }
}
void evalpostfix(char postfix[]){
    int i;
    char ch;
    int value,a,b;
    printf("evaluating postfix expression...\n");
    for(i=0;postfix[i]!=')';i++){
        ch=postfix[i];

        if (isdigit(ch))
        {
            push(ch-'0');
        }
        else if (ch=='+'||ch=='-'||ch=='*'||ch=='/')
        {
            a=pop();
            b=pop();
            switch (ch)
            {
            case '*':
                value=b*a;
                break;
            case '+':
                value=b+a;
                break;
            case '-':
                value=b-a;
                break;
            case '/':
                value=b/a;
            
            default:
                break;
            }
            push(value);
        }
    }
    printf("Result of expression evaluation : %d\n",pop());
}