#include <stdio.h>
#include "mystrlen.h"

int mystrlen(char *s){
    int n=0;
    while(n<MAXLEN&&s[n]!='\0'){
        n++;
    }
    return n;
}