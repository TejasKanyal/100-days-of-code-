#include<stdio.h>
void main() {
    int n ;
    printf("enter your number :");
    scanf("%d" , &n);

    for(int i =n ; i>=1 ; i--){
        printf("--> %d \n" , i );
    }
    printf("\n");
}