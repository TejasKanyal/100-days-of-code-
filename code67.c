#include<stdio.h>
void main() {
    int arr[100];
    int value ;
    int position;
    int i , n;

    printf("Enter the number of element in an array :");
    scanf("%d" , &n);

    printf("Enter the sorted array : ");
    for (i = 0 ; i < n ; i++){
        scanf("%d" , &arr[i]);
    }

    printf("Enter the element value do you want to add :");
    scanf("%d" , &value);

    printf("Enter the position of this  element %d :" , n);
    scanf("%d" , &position);

    if (position < 0 || position > n){
        printf("Invaild position to enter the element :");
    }
    else {
        for (i = n ; i > position ; i--){
            arr[i] = arr[i-1];
        }
    }
    arr[position] = value ;
    n++;

    printf("-------------------------------------------------------\n");

    for (i = 0 ; i < n ; i++){
        printf("%d\n" , arr[i]);
    }
    printf("\n");
}