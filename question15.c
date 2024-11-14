#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char c) {
    if (top < MAX - 1)
        stack[++top] = c;
}

char pop() {
    if (top == -1)
        return '\0';
    return stack[top--];
}

int isPalindrome(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len; i++)
        push(str[i]);

    for (int i = 0; i < len; i++) {
        if (str[i] != pop())
            return 0;
    }
    return 1;
}

int main() {
    char str[] = "madam";
    if (isPalindrome(str))
        printf("The string is a palindrome\n");
    else
        printf("The string is not a palindrome\n");
    return 0;
}
