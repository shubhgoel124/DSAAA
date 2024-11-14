#include <stdio.h>
#define MAX 100

int stack[MAX], top = -1;

void push(int value) {
    if (top == MAX - 1)
        printf("Stack overflow\n");
    else
        stack[++top] = value;
}

int pop() {
    if (top == -1) {
        printf("Stack underflow\n");
        return -1;
    } else
        return stack[top--];
}

void display() {
    for (int i = top; i >= 0; i--)
        printf("%d ", stack[i]);
    printf("\n");
}

int main() {
    push(1);
    push(2);
    push(3);
    display();
    pop();
    display();
    return 0;
}
