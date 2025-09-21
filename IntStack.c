// IntStack.c
#include <stdio.h>
#include <stdlib.h>
#include "IntStack.h"

static int stack[MAXITEMS];  // array to store stack elements
static int top;              // index of top element

void StackInit() {
    top = -1;  // empty stack
}

int StackIsEmpty() {
    return top < 0;
}

void StackPush(int n) {
    if (top >= MAXITEMS - 1) {
        fprintf(stderr, "Stack overflow\n");
        exit(EXIT_FAILURE);
    }
    stack[++top] = n;
}

int StackPop() {
    if (StackIsEmpty()) {
        fprintf(stderr, "Stack underflow\n");
        exit(EXIT_FAILURE);
    }
    return stack[top--];
}
