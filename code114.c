#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char *s) {
    int n = strlen(s);
    int maxLength = 0;
    int left = 0;
    int right = 0;
    int seen[128] = {0}; 

    while (right < n) {
        char currentChar = s[right];
        
        if (seen[currentChar] > 0) {
            
            if (seen[currentChar] > left) {
                left = seen[currentChar];
            }
        }
        
        if ((right - left + 1) > maxLength) {
            maxLength = right - left + 1;
        }
        
       
        seen[currentChar] = right + 1;
        
    
        right++;
    }

    return maxLength;
}

int main() {
    char s[100];
    printf("Enter a string: ");
    scanf("%s", s); 
    
    int length = lengthOfLongestSubstring(s);
    printf("Length of the longest substring without repeating characters: %d\n", length);

    return 0;
}
