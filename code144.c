#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

void printStudent(struct Student s) {
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student student1;
    strcpy(student1.name, "Alice Smith");
    student1.roll_no = 15;
    student1.marks = 85.5;

    printStudent(student1);

    return 0;
}
