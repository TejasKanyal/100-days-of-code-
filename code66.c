#include <stdio.h>

int main() {
    int arr[100];
    int n; 
    int value_to_insert;
    int i, pos;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the sorted elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value to insert: ");
    scanf("%d", &value_to_insert);

    
    pos = n; 
    for (i = 0; i < n; i++) {
        if (value_to_insert < arr[i]) {
            pos = i;
            break;
        }
    }

    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }


    arr[pos] = value_to_insert;
    n++; 

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}