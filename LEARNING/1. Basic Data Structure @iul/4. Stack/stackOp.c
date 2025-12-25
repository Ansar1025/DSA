#include <stdio.h>
#define max 5

int stack[max];
int TOP = -1;

void push();
void pop();
void display();
void menubar();

int main() {
    int choice;
    do {
        menubar();
        scanf("%d", &choice);
        switch (choice) {
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
            default:
                printf("Invalid key Entered !!\n");
        }
    } while(1);
    return 0;
}

void push() {
    int value;
    if (TOP == max - 1) {
        printf("Stack Overflow\n");
    } else {
        TOP++;
        printf("Enter Value : ");
        scanf("%d", &value);
        stack[TOP] = value;
        printf("%d pushed into stack at position %d\n", value, TOP);
    }
}

void pop() {
    if (TOP == -1) {
        printf("Stack Underflow\n");
    } else {
        printf("%d popped from stack at position %d\n", stack[TOP], TOP);
        TOP--;
    }
}

void display() {
    if (TOP == -1) {
        printf("Stack is empty!\n");
    } else {
        printf("Current Stack:\n");
        for (int i = TOP; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

void menubar() {
    printf("\n======== BASIC STACK OPERATION using Array ========\n");
    printf("1. Push\n2. Pop\n3. Display\n4. Exit\nENTER YOUR CHOICE : ");
}
