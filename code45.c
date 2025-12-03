#include<stdio.h>
void main () {
    int number ;
    double numerator , denominator ;
    double sum = 0.0 ;

    printf("enter number ");
    scanf("%d" , &number );


    for (int i =1 ; i <= number ; i++ ){
         numerator = 2  * i ;
         denominator = (2 * i) - 1 ;

         sum += numerator / denominator ;
    }

    printf("sum of the series up to %d terms : %f\n" , number , sum );
}