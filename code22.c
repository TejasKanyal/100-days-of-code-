#include <stdio.h>
void main () {
    float cp , sp , diff , percentage ;
    printf("costprice = ");
    scanf("%f" , &cp);

    printf("sellingprice = ");
    scanf("%f" , &sp);

    diff = sp - cp ;
    percentage = (diff /cp )*100 ;

    if (sp >cp){
        printf("profit percentage%f\n" , percentage);
    }
    else if (sp < cp ){
        printf("loss percentage %f\n" , percentage);
    }
    else {
        printf("you can not sell a product");
    }

    
}