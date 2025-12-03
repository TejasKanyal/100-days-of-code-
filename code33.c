#include <stdio.h>
int main(){
    int number , originalnumber , reminder , result = 0 ;
    printf("enter three digit number :");
    scanf("%d" , &number);

    originalnumber = number ;

    while(originalnumber != 0){
        reminder = originalnumber % 10 ;
        result += reminder*reminder*reminder ;
        originalnumber /= 10 ;
    }
    if (result == number ){
        printf("your number is armstrong %d",number);
    }
    else {
        printf("your number is not armsrtonm%d" , number);
    }
    return 0;
}