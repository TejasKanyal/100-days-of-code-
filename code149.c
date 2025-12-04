#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    struct Student *ptr;
    ptr = (struct Student *)malloc(sizeof(struct Student));

    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    ptr->id = 101;
    strcpy(ptr->name, "Alice Smith");
    ptr->marks = 85.5;

    printf("Student Details:\n");
    printf("ID: %d\n", ptr->id);
    printf("Name: %s\n", ptr->name);
    printf("Marks: %.2f\n", ptr->marks);

    free(ptr);
    ptr = NULL;

    return 0;
}
