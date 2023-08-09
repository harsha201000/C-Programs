#include <stdio.h>
#include <stdlib.h>


int main(){
    int num1;
    int num2;
    char operator;

    printf("Enter an operator (+ - * /): ");
    scanf("%c", &operator);

    printf("Enter First Number : ");
    scanf("%d", &num1);

    printf("Enter Second Number : ");
    scanf("%d", &num2);

    if(operator == '+'){
        int result;
        result = num1 + num2;
        printf("Addition : %d", result);
    } else if(operator == '-'){
        int result;
        result = num1 - num2;
        printf("Subtraction : %d", result);
    } else if(operator == '*'){
        int result;
        result = num1 * num2;
        printf("Multiplacation : %d", result);
    } else if(operator == '/'){
        int result;
        result = num1 / num2;
        printf("Division : %d", result);
    } else{
        printf("Invalid Operator");
    }
    return 0;
}