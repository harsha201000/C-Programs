#include <stdio.h>

int main(){

    // Bitwise Operators = special operators used in bit-level programming (knowing binary is important for this topic.)

    // & and
    // | or
    // ^ xor
    // << Left Shift
    // >> Right Shift

    int a = 10; // 10 = 00001010
    int b = 20; // 20 = 00010100
    int c = 0;  // 0 = 00000000

    printf("a = %d\n", a);
    printf("b = %d\n", b);

    c = a & b;
    printf("and : %d\n", c);

    c = a | b;
    printf("or : %d\n", c);

    c = a ^ b;
    printf("xor : %d\n", c);

    c = a << 2;
    printf("shift left : %d\n", c);

    c = a >> 1;
    printf("shift right : %d\n", c);

    
    return 0;
}