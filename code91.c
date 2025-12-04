#include <stdio.h>
#include <string.h>

int is_vowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

void remove_vowels(char *str) {
    int i, j;
    for (i = 0, j = 0; str[i] != '\0'; i++) {
        if (!is_vowel(str[i])) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

int main() {
    char myString[100];
    printf("Enter a string: ");
    fgets(myString, sizeof(myString), stdin);
    myString[strcspn(myString, "\n")] = '\0';
    remove_vowels(myString);
    printf("String after removing vowels: %s\n", myString);
    return 0;
}