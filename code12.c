#include <stdio.h>
void main() {
    int n ;
    printf("enter your number : ");
    scanf("%d" , &n);

    if (n != 0){

        if ( n>0){
            printf("number is positive  \n");
        }
        
    else if (n <0){
        printf("number is negative \n");
        
    }
    else {
        printf("number is zero \n");

    }
    
    
}
}