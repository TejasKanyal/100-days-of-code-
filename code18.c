#include<stdio.h>
void main () {
    float mark ;
    printf("enter your mark :");
    scanf("%f" , &mark );

    if ( mark > 90 && mark <= 100){

        printf("congratulation you got A garde \n");
    }
    else if (mark > 80 && mark <=89 ){
        printf("congratulation you got B garde\n");
    }
    else if (mark > 70 && mark <= 79 ){
        printf("congratulation you got C garde\n");
    }
    else if (mark > 60 && mark <= 69 ) {
        printf("congratulation you got D garde\n");
    }
    else {
        printf("grade F");
    }

}