#include <stdio.h>
#include <math.h>

int main(){

    const double pi = 3.14159;
    double radius;
    double circumfrence;
    double area;

    printf("Enter the radius of a circle : ");
    scanf("%lf", &radius);

    circumfrence = 2 * radius * pi;
    area = radius * radius * pi;

    printf("\nCircumfrence : %lf", circumfrence);
    printf("\nArea : %lf", area);

    return 0;
}