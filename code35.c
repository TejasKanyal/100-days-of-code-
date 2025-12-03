#include<stdio.h>
void main () {
    int number ;
    
    printf("enter your number : ");
    scanf("%d" , & number );

    if (number < 0 ){
        printf("enter a positive number : ");
    }

    for ( int i = 1 ; i <= number ; i++){
        if ( number % i == 0){
            printf("factor is %d\n" , i);
        }
    }
    printf("\n");
}