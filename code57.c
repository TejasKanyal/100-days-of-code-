#include<stdio.h>
void main () {
    int arr[] = {1 , 2 , 3} ;

    int sum = 0;

    for (int i = 0 ; i <=2 ; i++ ){
        sum = sum + arr[i] ;
    }
    printf("The Sum Of all Element In an Array is %d" , sum );

}