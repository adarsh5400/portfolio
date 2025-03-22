//Write a program to convert infix expression to postfix operation using stack.
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#define MAX_SIZE 100
typedef struct {
    char items[MAX_SIZE];
    int top;
} Stack;
void init(Stack *stack) {
    stack->top = -1;
}
bool isEmpty(Stack *stack) {
    return stack->top == -1;
}
void push(Stack *stack, char item) {
    if (stack->top == MAX_SIZE - 1) {
        printf("Stack overflow\n");
        exit(1);
    }
    stack->items[++stack->top] = item;
}
char pop(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow\n");
        exit(1);
    }
    return stack->items[stack->top--];
}
int getPrecedence(char op) {
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    if (op == '^')
        return 3;
    return 0;
}
void infixToPostfix(char infix[]) {
    Stack stack;
    init(&stack);
    char postfix[MAX_SIZE];
    int postfixIndex = 0;
    for (int i = 0; infix[i] != '\0'; i++) {
        char c = infix[i];
        if (c >= 'a' && c <= 'z') {
            postfix[postfixIndex++] = c;
        } else if (c == '(') {
            push(&stack, c);
        } else if (c == ')') {
            while (!isEmpty(&stack) && stack.items[stack.top] != '(') {
                postfix[postfixIndex++] = pop(&stack);
            }
            pop(&stack);
        } else {
            while (!isEmpty(&stack) && getPrecedence(stack.items[stack.top]) >= getPrecedence(c)) {
                postfix[postfixIndex++] = pop(&stack);
            }
            push(&stack, c);
        }
    }
    while (!isEmpty(&stack)) {
        postfix[postfixIndex++] = pop(&stack);
    }
    postfix[postfixIndex] = '\0';
    printf("Postfix expression: %s\n", postfix);
}
int main() {
    char infix[MAX_SIZE];
    printf("Enter infix expression: ");
    fgets(infix, MAX_SIZE, stdin);
    size_t length = strlen(infix);
    if (length > 0 && infix[length - 1] == '\n') {
    infix[length - 1] = '\0';
    }
     infixToPostfix(infix);
    return 0;
}