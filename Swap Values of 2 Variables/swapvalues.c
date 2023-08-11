#include <stdio.h>

int main(){

    //  //------- Example 3 - Exercise -------

    int a = 10;
    int b = 20;

    // c is a temp variable
    int c;

    
    c = a;
    a = b;
    b = c;

    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}