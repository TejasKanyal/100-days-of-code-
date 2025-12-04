#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main() {
    char myString[] = "Hello World";
    printf("Original string: %s\n", myString);
    reverseString(myString);
    printf("Reversed string: %s\n", myString);
    return 0;
}