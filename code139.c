#include <stdio.h>

enum Level {
    LOW = 1,
    MEDIUM,
    HIGH = 10,
    CRITICAL
};

int main() {
    enum Level my_low = LOW;
    enum Level my_medium = MEDIUM;
    enum Level my_high = HIGH;
    enum Level my_critical = CRITICAL;

    printf("The integer value of LOW is: %d\n", my_low);
    printf("The integer value of MEDIUM is: %d\n", my_medium);
    printf("The integer value of HIGH is: %d\n", my_high);
    printf("The integer value of CRITICAL is: %d\n", my_critical);

    return 0;
}
