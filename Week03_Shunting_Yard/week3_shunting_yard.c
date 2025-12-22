#include <stdio.h>
#include <ctype.h>

#define MAX 100

char stack[MAX];
int top = -1;

/* Stack operations */
void push(char c) {
    if (top < MAX - 1) {
        stack[++top] = c;
    }
}

char pop() {
    if (top >= 0) {
        return stack[top--];
    }
    return '\0';
}

char peek() {
    if (top >= 0) {
        return stack[top];
    }
    return '\0';
}

/* Operator precedence */
int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    if (op == '^') return 3;
    return 0;
}

/* Check if operator */
int isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

int main() {
    char infix[MAX], postfix[MAX];
    int k = 0;

    printf("Enter infix expression: ");
    scanf("%s", infix);

    for (int i = 0; infix[i] != '\0'; i++) {
        char token = infix[i];

        /* If operand, add to postfix */
        if (isalnum(token)) {
            postfix[k++] = token;
        }
        /* If left parenthesis, push to stack */
        else if (token == '(') {
            push(token);
        }
        /* If right parenthesis, pop until '(' */
        else if (token == ')') {
            while (peek() != '(' && top != -1) {
                postfix[k++] = pop();
            }
            pop(); /* Remove '(' */
        }
        /* If operator */
        else if (isOperator(token)) {
            while (top != -1 && precedence(peek()) >= precedence(token)) {
                postfix[k++] = pop();
            }
            push(token);
        }
    }

    /* Pop remaining operators */
    while (top != -1) {
        postfix[k++] = pop();
    }

    postfix[k] = '\0';

    printf("Postfix expression: %s\n", postfix);

    return 0;
}
