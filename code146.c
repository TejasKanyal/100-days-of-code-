#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    int id;
    char name[50];
    float salary;
    struct Date joining; 
};

int main() {
    
    struct Employee emp1 = {
        101,
        "John Doe",
        50000.00,
        {15, 7, 2023} 
    };

    printf("Employee Details:\n");
    printf("ID: %d\n", emp1.id);
    printf("Name: %s\n", emp1.name);
    printf("Salary: %.2f\n", emp1.salary);
    printf("Joining Date: %d/%d/%d\n", emp1.joining.day, emp1.joining.month, emp1.joining.year);

    return 0;
}
