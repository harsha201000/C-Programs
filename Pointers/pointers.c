#include <stdio.h>
#include <stdlib.h>

int main(){

    int age = 13;
    int *uAge = &age;

    printf("%d", &*&uAge);

    return 0;
}