#include <stdio.h>

void main() {
    int arr[] = {10, 20, 30, 40, 50};
    int target = 30; 
    int found_index = -1; 

    for (int i = 0; i < 5; i++) {
        if (arr[i] == target) {
            found_index = i; 
            break; 
        }
    }

    if (found_index != -1) {
        printf("Element %d found at index %d.\n", target, found_index);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

}