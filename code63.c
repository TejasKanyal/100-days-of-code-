#include<stdio.h>
void main () {
    int arr1[4] = {1,2,3,4};

    int arr2[5] = {5,6,7,8,9};

    int merge_size= 9;

    int arrmerg[merge_size];

    for (int i = 0 ; i <= 3 ; i++){
        arrmerg[i] = arr1[i] ;
    }


    for (int i =0 ; i  <=4 ; i++){
        arrmerg[4 +i] = arr2[i] ;
    }

    printf("merge array is -> ");
    for (int i = 0 ; i < merge_size ; i++){
        printf(" %d " , arrmerg[i]);
    }
}