#include <stdio.h>
#include <string.h>

int areAnagrams(char *s1, char *s2) {
    int count1[256] = {0};
    int count2[256] = {0};
    int i = 0;

    while (s1[i] != '\0') {
        count1[(int)s1[i]]++;
        i++;
    }

    i = 0;
    while (s2[i] != '\0') {
        count2[(int)s2[i]]++;
        i++;
    }

    for (i = 0; i < 256; i++) {
        if (count1[i] != count2[i]) {
            return 0;
        }
    }

    return 1;
}

int main() {
    char str1[] = "listen";
    char str2[] = "silent";

    if (areAnagrams(str1, str2)) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }

    char str3[] = "hello";
    char str4[] = "world";

    if (areAnagrams(str3, str4)) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}