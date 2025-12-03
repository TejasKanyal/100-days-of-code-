#include <stdio.h>
void main () {
    int n , fact; 
    printf("enter your name :");\
    scanf("%d" , &n);

    fact = 1 ;
    for(int i =1 ; i <=n ; i++){ 
        fact = fact * i ;
    }
    printf("your factorial is =%d\n" , fact);
}