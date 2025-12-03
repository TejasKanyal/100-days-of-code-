#include<stdio.h>

void main () {
    int side1 , side2 , side3 ;

    printf("enter your side1 = ");
    scanf("%d" , &side1);

    printf("enter your side2 = ");
    scanf("%d" , &side2);

    printf("enter your side3 = ");
    scanf("%d" , &side3);

    if (side1 == side2 && side2 == side3){
        printf("triangle is equilateral");
    }
    else if (side1 == side2 || side2 == side3 || side3 ==side1){
        printf("triangle is isosceles");
    }
    else {
        printf("triangle is Scalene");
    }
}
