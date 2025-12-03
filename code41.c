#include <stdio.h>
#include <math.h>

void main() {
    int number, firstDigit, lastDigit, digitscount;
    int swappedNum;

    printf("Enter a number: ");
    scanf("%d", &number );

    if (number >= 0 && number <= 9) {
           printf("Number after swapping first and last digits: %d\n", number);
                return 0;
    }

    lastDigit = number % 10;

    while (number != 0 ){
        number /= 10 ;
        digitscount  ++ ;
    }

    firstDigit = number / (int)pow(10, digitscount);

    swappedNum = lastDigit * (int)pow(10, digitscount);
    swappedNum += number % (int)pow(10, digitscount);

    swappedNum = swappedNum - lastDigit + firstDigit;

    printf("%d" , swappedNum);

}