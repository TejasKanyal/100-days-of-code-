#include <stdio.h>

int main() {
    char name[100];
    int age;
    FILE *file_pointer;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    /* Open the file in write mode ("w") */
    file_pointer = fopen("info.txt", "w");

    if (file_pointer == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    /* Write data to the file using fprintf */
    fprintf(file_pointer, "Name: %s\n", name);
    fprintf(file_pointer, "Age: %d\n", age);

    /* Close the file */
    fclose(file_pointer);

    printf("Data successfully saved to info.txt.\n");

    return 0;
}
