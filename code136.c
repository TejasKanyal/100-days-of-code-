#include <stdio.h>


typedef enum {
    ADD,
    SUBTRACT,
    MULTIPLY
} OperationChoice;


void perform_operation(OperationChoice choice, int a, int b);

int main() {
    int num1 = 10;
    int num2 = 5;

    printf("Performing operations on %d and %d:\n\n", num1, num2);

    perform_operation(ADD, num1, num2);
    perform_operation(SUBTRACT, num1, num2);
    perform_operation(MULTIPLY, num1, num2);

    return 0;
}

void perform_operation(OperationChoice choice, int a, int b) {
    int result;

   
    switch (choice) {
        case ADD:
            result = a + b;
            printf("%d + %d = %d\n", a, b, result);
            break;
        case SUBTRACT:
            result = a - b;
            printf("%d - %d = %d\n", a, b, result);
            break;
        case MULTIPLY:
            result = a * b;
            printf("%d * %d = %d\n", a, b, result);
            break;
        default:
            printf("Invalid operation choice\n");
            break;
    }
}
