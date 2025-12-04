#include <stdio.h>
#include <string.h>

#define ALPHABET_SIZE 26

void count_frequencies(const char *str, int *counts) {
    for (int i = 0; str[i] != '\0'; i++) {
        counts[str[i] - 'a']++;
    }
}

int main() {
    char s[100], t[100];
    int counts_s[ALPHABET_SIZE] = {0};
    int counts_t[ALPHABET_SIZE] = {0};
    int is_anagram = 1;

    printf("Enter the first string: ");
    scanf("%s", s);
    printf("Enter the second string: ");
    scanf("%s", t);

    if (strlen(s) != strlen(t)) {
        is_anagram = 0;
    } else {
        count_frequencies(s, counts_s);
        count_frequencies(t, counts_t);

        for (int i = 0; i < ALPHABET_SIZE; i++) {
            if (counts_s[i] != counts_t[i]) {
                is_anagram = 0;
                break;
            }
        }
    }

    if (is_anagram) {
        printf("Anagram\n");
    } else {
        printf("Not Anagram\n");
    }

    return 0;
}
