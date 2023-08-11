#include <stdio.h>

int FindMax(int x, int y, int a, int b, int z){
    return (a > z > b > y > x) ? a : z , b , y , x;
}

int main(){


    int max = FindMax(100,20,70,30,50);
    printf("%d", max);

    return 0;
}