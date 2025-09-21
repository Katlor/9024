// IntQueue.c
#include <stdio.h>
#include <stdlib.h>
#include "IntQueue.h"

static int queue[MAXITEMS];  // array to store queue elements
static int begin;
static int end;
static int size;

void QueueInit() {
    begin=0;
    end=0;
    size=0;
}

int QueueIsEmpty() {
    return size == 0;
}

void QueueEnqueue(int n) {
    if(size>=MAXITEMS){
        fprintf(stderr, "Queue overflow\n");
        exit(EXIT_FAILURE);
    }
    queue[end]=n;
    end=(end+1)%MAXITEMS;
    size++;
}

int QueueDequeue() {
    if (QueueIsEmpty()) {
        fprintf(stderr, "Queue underflow\n");
        exit(EXIT_FAILURE);
    }
    int value=queue[begin];
    begin=(begin+1)%MAXITEMS;
    size--;
    return value;
}
