#include <stdio.h>
#include <stdlib.h>

int main(){
    char name[] = "Harsha";
    int age = 13;
    double price_of_a_truck = 5.00;
    char grade = 'A';

    printf("name : %p , age : %p, grade : %p, cost of a truck : %p", name, age, grade, price_of_a_truck);
    return 0;
}