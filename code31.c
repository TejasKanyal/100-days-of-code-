#include <stdio.h>
void main () {
    int number , i ;

    printf("enter your number :");
    scanf("%d" , &number );

    printf("binary reprensation -->");

    for (i  = 31 ; i >=0 ; i--){
        printf("%d" , (number >> i) &1);
    }
    printf("\n");
}