#include <stdio.h>
#include <string.h>

void printSubstrings(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            for (int k = i; k <= j; k++) {
                putchar(str[k]);
            }
            printf("\n"); 
        }
    }
}

int main() {
    char myString[] = "abc";
    printSubstrings(myString);
    return 0;
}