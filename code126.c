#include <stdio.h>

int main() {
    char filename[100];
    FILE *fp;
    int ch;

    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error: File does not exist.\n");
        return 1;
    }

    printf("\nFile content:\n");

    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);
    return 0;
}
