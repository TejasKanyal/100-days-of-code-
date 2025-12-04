#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    int i;

    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);

    for (i = 0; i < strlen(name); i++) {
        if (name[i] == '\n') {
            name[i] = '\0';
            break;
        }
    }

    if (strlen(name) > 0 && isalpha(name[0])) {
        printf("%c", toupper(name[0]));
    }

    for (i = 1; i < strlen(name); i++) {
        if (name[i] == ' ' && isalpha(name[i + 1])) {
            printf("%c", toupper(name[i + 1]));
        }
    }
    printf("\n");

    return 0;
}