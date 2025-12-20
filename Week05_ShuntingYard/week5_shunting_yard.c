#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

typedef struct {
    char items[MAX];
    int top;
} Stack;

void initStack(Stack* s) { s->top = -1; }
int isEmpty(Stack* s) { return s->top == -1; }
int isFull(Stack* s) { return s->top == MAX-1; }

void push(Stack* s, char c) {
    if(!isFull(s)) s->items[++s->top] = c;
}

char pop(Stack* s) {
    if(!isEmpty(s)) return s->items[s->top--];
    return '\0';
}

char peek(Stack* s) {
    if(!isEmpty(s)) return s->items[s->top];
    return '\0';
}

int precedence(char op) {
    if(op == '+' || op == '-') return 1;
    if(op == '*' || op == '/') return 2;
    return 0;
}

int isOperator(char c) {
    return c=='+' || c=='-' || c=='*' || c=='/';
}

void infixToPostfix(char* infix, char* postfix) {
    Stack s;
    initStack(&s);
    int k = 0;
    
    for(int i=0; infix[i] != '\0'; i++) {
        char c = infix[i];
        
        if(isalnum(c)) { // Operand
            postfix[k++] = c;
            postfix[k++] = ' ';
        }
        else if(c == '(') {
            push(&s, c);
        }
        else if(c == ')') {
            while(!isEmpty(&s) && peek(&s) != '(') {
                postfix[k++] = pop(&s);
                postfix[k++] = ' ';
            }
            pop(&s); // Remove '('
        }
        else if(isOperator(c)) {
            while(!isEmpty(&s) && precedence(peek(&s)) >= precedence(c)) {
                postfix[k++] = pop(&s);
                postfix[k++] = ' ';
            }
            push(&s, c);
        }
    }
    
    while(!isEmpty(&s)) {
        postfix[k++] = pop(&s);
        postfix[k++] = ' ';
    }
    postfix[k] = '\0';
}

int main() {
    char infix1[] = "a*b+c";
    char infix2[] = "(a+b)*c";
    char postfix[MAX];

    printf("Infix: %s\n", infix1);
    infixToPostfix(infix1, postfix);
    printf("Postfix: %s\n\n", postfix);

    printf("Infix: %s\n", infix2);
    infixToPostfix(infix2, postfix);
    printf("Postfix: %s\n", postfix);

    return 0;
}
