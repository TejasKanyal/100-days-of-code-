#include <stdio.h>
#include <string.h>
#include <time.h>

int main() {
    char inputDate[] = "25/04/2023";
    struct tm dateStruct;
    char outputDate[20];

    strptime(inputDate, "%d/%m/%Y", &dateStruct);
    strftime(outputDate, sizeof(outputDate), "%d-Apr-%Y", &dateStruct);

    printf("Original date: %s\n", inputDate);
    printf("Formatted date: %s\n", outputDate);

    return 0;
}