#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char input[256];
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = 0;

    int length = strlen(input);
    if (length > 0) {
        input[0] = toupper((unsigned char)input[0]);
    }

    for (int i = 1; i < length; i++) {
        if (ispunct((unsigned char)input[i-1]) || isspace((unsigned char)input[i-1])) {
            input[i] = tolower((unsigned char)input[i]);
        } else {
            input[i] = tolower((unsigned char)input[i]);
        }
    }

    printf("Sentence case string: %s\n", input);
    return 0;
}
