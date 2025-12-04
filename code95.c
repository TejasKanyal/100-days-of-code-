#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

bool isRotation(const char *str1, const char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2) {
        return false;
    }

    if (len1 == 0) {
        return true;
    }

    char *temp = (char *)malloc(2 * len1 + 1);
    if (temp == NULL) {
        return false;
    }

    strcpy(temp, str1);
    strcat(temp, str1);

    bool result = (strstr(temp, str2) != NULL);

    free(temp);
    return result;
}