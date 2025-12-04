#include <stdio.h>

typedef enum {
    JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
} Month;

int get_days(Month month, int is_leap) {
    switch (month) {
        case JAN:
        case MAR:
        case MAY:
        case JUL:
        case AUG:
        case OCT:
        case DEC:
            return 31;
        case APR:
        case JUN:
        case SEP:
        case NOV:
            return 30;
        case FEB:
            return is_leap ? 29 : 28;
        default:
            return 0;
    }
}

int main() {
    int year = 2024;
    int is_leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    printf("Days in months for the year %d:\n", year);

    printf("January: %d days\n", get_days(JAN, is_leap));
    printf("February: %d days\n", get_days(FEB, is_leap));
    printf("March: %d days\n", get_days(MAR, is_leap));
    printf("April: %d days\n", get_days(APR, is_leap));
    printf("May: %d days\n", get_days(MAY, is_leap));
    printf("June: %d days\n", get_days(JUN, is_leap));
    printf("July: %d days\n", get_days(JUL, is_leap));
    printf("August: %d days\n", get_days(AUG, is_leap));
    printf("September: %d days\n", get_days(SEP, is_leap));
    printf("October: %d days\n", get_days(OCT, is_leap));
    printf("November: %d days\n", get_days(NOV, is_leap));
    printf("December: %d days\n", get_days(DEC, is_leap));

    return 0;
}
