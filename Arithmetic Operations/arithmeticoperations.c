#include <stdio.h>
main(){
    
    // Initalize Variables
    int x = 10;
    int y = 20;
    int result;

    printf("x = %d\n", x);
    printf("y = %d\n", y);

    // Addition
    result = x + y;
    printf("The sum of two numbers are %d\n", result);

    // Subtraction
    result = y - x;
    printf("The difference of two numbers are %d\n", result);

    // Multiplacation
    result = x * y;
    printf("The product of two numbers are %d\n", result);

    // Division
    result = y / x;
    printf("The quotient of two numbers are %d\n", result);

    return 0;
}