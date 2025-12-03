#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    while (num1 != num2) {
        if (num1 > num2) {
            num1 -= num2; 
        } else {
            num2 -= num1; 
        }
    }

    printf("The HCF (GCD) is: %d\n", num1);

    return 0;
}