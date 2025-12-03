#include <stdio.h>
void main() {

    char ch  ;
    printf("entre : ");
    scanf("%c" , &ch);

    if (ch >= 'a' && ch <= 'z'){
        printf("character is lower case \n");
    }
    else if (ch >= 'A' && ch <= 'Z'){
        printf ("character is upper case \n");
    }
    else if (ch >= '0' && ch <= '9'){
        printf("you type a digit\n");
    }
    else {
        printf("you entre a special character \n");
    }
    


}