#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

void writeRecords() {
    FILE *filePointer;
    struct Student s;
    int numRecords;

    
    filePointer = fopen("student_records.txt", "w");
    if (filePointer == NULL) {
        printf("Error opening file for writing!\n");
        exit(1);
    }

    printf("Enter number of records to store: ");
    scanf("%d", &numRecords);

    for (int i = 0; i < numRecords; ++i) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", s.name);
        printf("Roll Number: ");
        scanf("%d", &s.rollNumber);
        printf("Marks: ");
        scanf("%f", &s.marks);

        
        fprintf(filePointer, "%s %d %.2f\n", s.name, s.rollNumber, s.marks);
    }

    
    fclose(filePointer);
}

void readAndDisplayRecords() {
    FILE *filePointer;
    struct Student s;

    
    filePointer = fopen("student_records.txt", "r");
    if (filePointer == NULL) {
        printf("Error opening file for reading or file not found!\n");
        return;
    }

    printf("\n--- Stored Student Records ---\n");

    
    while (fscanf(filePointer, "%s %d %f", s.name, &s.rollNumber, &s.marks) != EOF) {
        printf("Name: %s, Roll Number: %d, Marks: %.2f\n", s.name, s.rollNumber, s.marks);
    }

    
    fclose(filePointer);
}

int main() {
    writeRecords();
    readAndDisplayRecords();

    return 0;
}
