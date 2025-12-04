#include <stdio.h>
#include <string.h>

#define MAX_SENTENCE_LEN 1024
#define MAX_WORD_LEN 256

int main() {
    char sentence[MAX_SENTENCE_LEN];
    char longestWord[MAX_WORD_LEN];
    char currentWord[MAX_WORD_LEN];
    int longestLength = 0;
    int currentLength = 0;
    int i, j;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    sentence[strcspn(sentence, "\n")] = 0;

    for (i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] != ' ' && sentence[i] != '\t' && sentence[i] != '\n') {
            currentWord[currentLength++] = sentence[i];
        } else {
            if (currentLength > 0) {
                currentWord[currentLength] = '\0';
                if (currentLength > longestLength) {
                    longestLength = currentLength;
                    strcpy(longestWord, currentWord);
                }
                currentLength = 0;
            }
        }
    }

    if (currentLength > 0) {
        currentWord[currentLength] = '\0';
        if (currentLength > longestLength) {
            longestLength = currentLength;
            strcpy(longestWord, currentWord);
        }
    }

    if (longestLength > 0) {
        printf("Longest word: %s\n", longestWord);
        printf("Length: %d\n", longestLength);
    } else {
        printf("No words found in the sentence.\n");
    }

    return 0;
}