#include <stdio.h>
#include <string.h>

void replaceSpacesWithHyphens(char *str) {
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = '-';
        }
    }
}

int main() {
    char myString[] = "This is a sample string";
    replaceSpacesWithHyphens(myString);
    printf("Modified string: %s\n", myString);
    return 0;
}