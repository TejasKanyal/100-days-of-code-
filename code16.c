#include <stdio.h>
void main () {
    int a , b ,c ;

    printf("enter your nummber a : ");
    scanf("%d" , &a );

    printf("enter your nummber b : ");
    scanf("%d" , &b );

    printf("enter your nummber c : ");
    scanf("%d" , &c );

    if (a>b && a>c){
        printf("a is greatre\n ");
    }
    else if (b>c){
        printf("b is greatre \n");
    }
    else {
        printf("c is greater ");
    }
}



