#include<stdio.h>
void main () {
    int num1 , num2 , maximum , lcm ;
    printf("enter your num1  :");
    scanf("%d" , &num1);

    printf("enter your num2  :");
    scanf("%d" , &num2);

    maximum = (num1 > num2) ? num1 : num2 ;

    while (1){
    if (maximum % num1 == 0 && maximum % num2 == 0){
        lcm = maximum ;
        break ;
    }
    maximum ++ ;
}
printf("your LCM of %d and %d is %d.\n" , num1 , num2 , lcm);

 

}