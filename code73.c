#include<stdio.h>
void main () {
    int row  , col ;

    printf("enter the  number of row : ");
    scanf("%d" , &row );

    printf("enter the number of col : ");
    scanf("%d", &col);

    int matrix[row][col];
    int sum_matrix[row];

    for (int i = 0 ; i < row ; i++){
        for (int j = 0 ; j< col ; j++){
            printf("enter the element at [%d][%d]" , i , j);
            scanf("%d" , &matrix[i][j]);
        }
    }

    for (int i = 0 ; i < row  ; i++){
        int current_sum = 0 ;
        for (int j = 0  ; j < col ; j++){
            current_sum += matrix[i][j];
        }
        sum_matrix[i] = current_sum ;
    }
    printf("The  sum of each row is --> \n");
    for (int i =0 ; i < row ; i++){
        printf(" the sum of  %d row is %d --> " , i + 1 , sum_matrix[i]);
    }
}