#include <stdio.h>
#include "mystrlen.h"

int main(void) {
    char s[BUFSIZ];
    int len;
    // Modify this section of the code
    // -------------------------------
    while(1){
        printf("Enter a string: ");
        fgets(s, BUFSIZ, stdin);
        if (s[0]=='\n'){
            printf("Goodbye!\n");
            break;
        }
        len=mystrlen(s);
        printf("%d\n", len);
    }
    // -------------------------------
    return 0;

}
