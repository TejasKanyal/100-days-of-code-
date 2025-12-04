#include<stdio.h>
void main () {
    int rows = 9 ;

    for (int i =1 ; i <= 9 ; i = i + 2){
        for (int j = 1 ; j<=i ; j++){
            printf("*");
        }
        printf("\n");
    }

    for (int i = 8 ; i>0 ; i-=2){
        for (int j =1 ; j<i ; j++){
            printf("*");
        }
        printf("\n");
    }
    
}