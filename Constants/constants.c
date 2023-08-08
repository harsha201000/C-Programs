#include <stdio.h>

#define LENGTH  5
#define WIDTH  5

int main(){
    printf("Length of a rectangle is : %d\n", LENGTH);
    printf("Width of a rectangle is : %d\n", WIDTH);

    int area;

    area = LENGTH * WIDTH;
    printf("Area of a rectangle is : %d", area);

    return 0;

}