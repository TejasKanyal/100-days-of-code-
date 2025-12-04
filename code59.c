#include<stdio.h>
void main () {
    int arr[]= {1,2,5,9,3,4,8,10,12};

    int even_count=0;
    int odd_count=0;

    for (int i =0 ; i<= 8 ; i++){
        if (arr[i] % 2 ==0){
            even_count++;
        }
        else if (arr[i] % 2 != 0 ){
            odd_count++;
        }
    }
    printf("The Count of Even Number :%d\n" , even_count);
    printf("The Count of Odd Number :%d\n" , odd_count);
        
}