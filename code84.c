#include <stdio.h>

void to_uppercase(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        i++;
    }
}

int main() {
    char my_string[] = "hello world";
    to_uppercase(my_string);
    printf("%s\n", my_string);
    return 0;
}