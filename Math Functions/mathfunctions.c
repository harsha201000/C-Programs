#include <stdio.h>
#include <math.h>

int main(){
    int a = 10;
    double b = pow(4,16);
    int c = round(9.5);
    int d = ceil(9.5);
    int e = floor(2.99);
    int f = fabs(-10);
    double g = log(10);
    double h = sin(60);
    double i = cos(80);
    double j = tan(90);

    printf("\n%d", a);
    printf("\n%lf", b);
    printf("\n%d", c);
    printf("\n%d", d);
    printf("\n%d", e);
    printf("\n%d", f);
    printf("\n%lf", g);
    printf("\n%lf", h);
    printf("\n%lf", i);
    printf("\n%lf", j);
    

    return 0;
}