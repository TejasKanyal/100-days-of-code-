#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    int num;
    long long sum = 0;
    int count = 0;
    float average;

    fptr = fopen("numbers.txt", "r");

    if (fptr == NULL) {
        printf("Error opening file. Make sure numbers.txt exists.\n");
        return 1;
    }

    while (fscanf(fptr, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fptr);

    if (count > 0) {
        average = (float)sum / count;
        printf("Sum of integers: %lld\n", sum);
        printf("Average of integers: %.2f\n", average);
    } else {
        printf("No integers found in the file.\n");
    }

    return 0;
}
