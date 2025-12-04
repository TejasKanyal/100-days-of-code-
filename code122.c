#include <stdio.h>

#define BUFFER_SIZE 256

int main() {
    FILE *file_pointer;
    char buffer[BUFFER_SIZE];
    char *filename = "info.txt";

    file_pointer = fopen(filename, "r");

    if (file_pointer == NULL) {
        printf("Error: Could not open the file %s\n", filename);
        return 1;
    }

    while (fgets(buffer, BUFFER_SIZE, file_pointer) != NULL) {
        printf("%s", buffer);
    }

    if (ferror(file_pointer)) {
        printf("Error reading file.\n");
    }

    fclose(file_pointer);

    return 0;
}
