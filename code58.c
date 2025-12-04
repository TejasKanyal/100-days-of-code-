#include<stdio.h>
void main () {
    int arr[] = {1,2,5,4,8,9,3,} ;

    int max = arr[0];
    int min = arr[0];

    for ( int i =1 ; i <=8 ; i++){
        if (arr[i] > max ){
            max = arr[i] ;
        }
        
        if (arr[i] < min ){
            min = arr[i];
        }
    }
    printf("maximum element is %d\n" , max);
    printf("minimum element is %d\n" , min );
}