#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
    FILE *file;
    char path[100];
    int ch;
    int characters = 0;
    int words = 0;
    int lines = 0;
    int inWord = 0; 

    printf("Enter source file path: ");
    scanf("%99s", path);

    file = fopen(path, "r");

    if (file == NULL) {
        printf("\nUnable to open file.\n");
        exit(EXIT_FAILURE);
    }

    while ((ch = fgetc(file)) != EOF) {
        characters++;

        if (ch == '\n') {
            lines++;
        }

        if (isspace(ch)) {
            inWord = 0;
        } else if (inWord == 0) {
            words++;
            inWord = 1;
        }
    }

    
    if (characters > 0 && ch != '\n') {
        lines++;
    }

    printf("\n");
    printf("Total characters = %d\n", characters);
    printf("Total words = %d\n", words);
    printf("Total lines = %d\n", lines);

    fclose(file);

    return 0;
}
