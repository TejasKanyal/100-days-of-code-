#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *inputFile, *outputFile;
    char character;

    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Error opening input.txt\n");
        return 1;
    }

    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Error opening output.txt\n");
        fclose(inputFile);
        return 1;
    }

    while ((character = fgetc(inputFile)) != EOF) {
        fputc(toupper(character), outputFile);
    }

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
