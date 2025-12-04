#include<stdio.h>
void main() {
    int rows ;

    printf("enter your rows :");
    scanf("%d" , &rows );

    for (int i = rows ; i >= 1 ; i-- ){

        for (int k = 1; k<=i ; k++){
            printf("  ");
        }

        for (int j = i ; j <= rows ; j++ ){
            printf("%d" , j);
        
        }
        printf("\n");
    }
    
}