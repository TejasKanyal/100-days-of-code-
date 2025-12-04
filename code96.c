#include <stdio.h>
#include <string.h>

void reverseSubstring(char* str, int start, int end) {
    char temp;
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

void reverseWordsInSentence(char* sentence) {
    int i = 0, j = 0;
    int len = strlen(sentence);

    while (j <= len) {
        if (sentence[j] == ' ' || sentence[j] == '\0') {
            reverseSubstring(sentence, i, j - 1); 
            i = j + 1; 
        }
        j++;
    }
}

int main() {
    char sentence[] = "This is a test sentence";
    printf("Original sentence: %s\n", sentence);

    reverseWordsInSentence(sentence);

    printf("Sentence with reversed words: %s\n", sentence);
    return 0;
}