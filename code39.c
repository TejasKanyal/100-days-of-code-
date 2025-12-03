#include<stdio.h>
void main () {
    int number , product , digit  ;
    printf("enter your number :");
    scanf("%d" , &number );


    product = 1 ;
    while ( number > 0){
        digit = number % 10 ;
        if (digit % 2 == 0){
            break ;
        }
        product = product* digit ;
        number = number /10 ;
    }
    printf("your product of odd digit is %d \n" , product);
}