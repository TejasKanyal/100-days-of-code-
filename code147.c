#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

void write_employee_data() {
    FILE *file_ptr;
    struct Employee emp1 = {101, "Alice Smith", 60000.0};
    struct Employee emp2 = {102, "Bob Johnson", 75000.0};

    file_ptr = fopen("employees.bin", "wb");
    if (file_ptr == NULL) {
        perror("Error opening file for writing");
        exit(EXIT_FAILURE);
    }

    fwrite(&emp1, sizeof(struct Employee), 1, file_ptr);
    fwrite(&emp2, sizeof(struct Employee), 1, file_ptr);

    fclose(file_ptr);
    printf("Employee data written to employees.bin successfully.\n");
}

void read_employee_data() {
    FILE *file_ptr;
    struct Employee emp;

    file_ptr = fopen("employees.bin", "rb");
    if (file_ptr == NULL) {
        perror("Error opening file for reading");
        exit(EXIT_FAILURE);
    }

    printf("\nEmployee Data Read from File:\n");
    while (fread(&emp, sizeof(struct Employee), 1, file_ptr) == 1) {
        printf("ID: %d, Name: %s, Salary: %.2f\n", emp.id, emp.name, emp.salary);
    }

    fclose(file_ptr);
}

int main() {
    write_employee_data();
    read_employee_data();

    return 0;
}
