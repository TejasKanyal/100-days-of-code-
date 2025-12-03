#include<stdio.h>
void main() {
    int number , digit , result ,original_number ;

    printf("enter your number :");
    scanf("%d" , &number);

    original_number = number ;
    result =0 ;

    while (number != 0){
        digit = number % 10 ;
        result += digit ;
        number = number / 10 ;
    }

    if (original_number == result ){
        printf("number is perfect %d \n" , original_number );
    }
    else {
        printf("numbe is not perfect %d \n " , original_number);
    }
}