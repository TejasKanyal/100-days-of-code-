#include<stdio.h>
#include<string.h>

void main () {
    char binarynum[1000];
    char onescomplement[1000];
    int i ,length ;
    int isvaild = 1;

    printf("enter your binary number :");
    scanf("%s" , &binarynum);

    length = strlen(binarynum);

    for( i= 0 ; i<length ; i++){
        if(binarynum[i] == '0'){
            onescomplement[i] = '1';
        }
        else if (binarynum[i] == '1'){
            onescomplement[i] = '0';
        }
        else{
            isvaild = 0 ;
            break ;
        }
    }

        onescomplement[length] ='\0';

    if (isvaild){
        printf("original binary number :%s\n" , binarynum);
        printf("onescomplement is :%s\n" , onescomplement);
    }
    else{
        printf("you enter a wrong numner :");
    }
}