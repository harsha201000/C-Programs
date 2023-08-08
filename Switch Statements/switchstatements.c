#include <stdio.h>
#include <stdlib.h>

int main(){

    char grade = 'B';

    switch(grade){
    case 'A':
        printf("You did awesome!");
        break;
    case 'B':
        printf("You did great");
        break;
    case 'C':
        printf("You did okay");
        break;
    case 'D':
        printf("You did bad");
        break;
    case 'F':
        printf("You Failed");
        break;
    default :
        printf("Invalid Grade");

    }
    return 0;
}