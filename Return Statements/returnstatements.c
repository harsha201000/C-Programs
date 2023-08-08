#include <stdio.h>
#include <stdlib.h>

int cube(int num);

int main(){

    printf("Answer %d", cube(10));

    return 0;
}

int cube(int num){
    return num * num * num;
}