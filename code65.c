#include<stdio.h>
void main () {
    
    int arr[] ={10,20,30,40,50,60,70,80,90};

    int target;
    int low = 0 ;
    int size = 9 ;
    int high = size -1 ;
    int  mid_point ;
    int found= -1 ;


    printf("Enter your Target -> ");
    scanf("%d" , &target);
   

    while(low <= high) {
    mid_point = low + (high - low ) /2 ;
    if (arr[mid_point] == target){
        found = mid_point ;
        break ;
    }
    else if (arr[mid_point] < target){
        low = mid_point +1 ;
    }
    else {
        high = mid_point -1 ;
        }
    }

    if (found != -1){
        printf("target %d is found in index = %d" , target , found );
    }
    else {
        printf("target %d is not found in this array" , target );
    }
}