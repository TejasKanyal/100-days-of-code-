#include<stdio.h>
void main () {
    int number , i , remainder ;
    printf("enter your number :");
    scanf("%d" , &number );

    for ( i=1 ; i<=number  ; i++){
        remainder = i % 2 ;
        if ( i == 2){
            continue;
        }
    }
    if (remainder == 0 && number != 2 ){
        printf("number is not prime");
    }
    else if ( number == 2){
        printf("number is prime ");
    }
    else {
        printf("number is prime ");
    }
}
