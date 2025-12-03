#include<stdio.h>

void main () { 
    int Day ;
    printf("enter your Day");
    scanf("%d" , &Day );

    switch (Day) {
        case 1 : printf("monday");
                break ;
        case 2 : printf("tuesday");
                break ;
        case 3 : printf("wednesday");
                break ;
        case 4 : printf("thrusday");
                break ;
        case 5 : printf("friday");
                break ;
        case 6 : printf("satarday");
                break ;
        case 7 : printf("sunday chuuti");
                break ;
    }
}