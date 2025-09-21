#include <stdio.h>
#include "IntStack.h"

int main(void){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);

    StackInit();

    if (n==0){
        printf("0\n");
        return 0;
    }

    while (n>0){
        StackPush(n%2);
        n=n/2;
    }

    while(!StackIsEmpty()){
        printf("%d",StackPop());
    }
    printf("\n");
    return 0;
}