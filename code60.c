#include<stdio.h>
void main() {
    int n;
    printf("Enter Number Of Integer Do You Want To Print : ");
    scanf("%d" , &n);
    
    int arr[n];

    printf("Enter %d Integer Element\n: " , n);
    for (int i =0 ; i <=n ; i++){
        printf("Enter Element %d \n" , i+1);
        scanf("%d" , &arr[i]);
    }
    int positive_count=0;
    int negative_count=0;
    int zero_count=0;

     for (int i =0 ; i<=n ; i++){
    if (arr[i] > 0 ){
        positive_count++;
    }
    else if (arr[i] < 0 ){
        negative_count++;
    }
    else {
        zero_count++;
    }

}

    printf("The Count of Positive Element -> %d\n" , positive_count);
    printf("The Count of negative Element -> %d\n" , negative_count);
    printf("The Count of zero Element -> %d\n" , zero_count);

}