#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file_pointer;
    char character;
    int vowels = 0, consonants = 0;
    const char *filename = "input.txt";

    file_pointer = fopen(filename, "r");

    if (file_pointer == NULL) {
        printf("Error opening file %s. Please make sure the file exists.\\n", filename);
        return 1;
    }

    while ((character = fgetc(file_pointer)) != EOF) {
        if (isalpha(character)) {
            character = tolower(character);
            if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    fclose(file_pointer);

    printf("Vowels: %d\\n", vowels);
    printf("Consonants: %d\\n", consonants);

    return 0;
}
