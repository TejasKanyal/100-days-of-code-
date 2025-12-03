#include <stdio.h>
void main () {
    int num , sum , digit  ;
    printf("enter your number :");
    scanf("%d" , &num);

    sum =0 ;
    while ( num > 0){
        digit = num % 10 ;
        sum = sum + digit ;
        num = num /10 ; 
        
    }
    printf("your sum of digit is = %d \n" , sum);

}