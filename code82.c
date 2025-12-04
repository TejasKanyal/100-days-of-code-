#include <stdio.h>
#include <string.h> 

int main() {
    char myString[] = "Hello";
    int i;

   
    for (i = 0; i < strlen(myString); i++) {
        printf("%c\n", myString[i]); 
    }

    return 0;
}