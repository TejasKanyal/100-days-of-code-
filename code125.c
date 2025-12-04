#include <stdio.h>

int main() {
    FILE *file_pointer;
    char text_to_append[100];

    file_pointer = fopen("your_filename.txt", "a");

    if (file_pointer == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter a line of text to append:\n");
    fgets(text_to_append, sizeof(text_to_append), stdin);

    fprintf(file_pointer, "%s", text_to_append);

    fclose(file_pointer);

    printf("Text appended successfully.\n");

    return 0;
}
