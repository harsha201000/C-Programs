#include <stdio.h>
#include <stdlib.h>


void say_hello(char name[] , int age){
    printf("Hello %s, You are %d years old\n", name, age);
}

int main(){
    say_hello("Harsha", 13);
    say_hello("Havisha", 10);
    say_hello("Durga", 40);
    say_hello("Siva", 42);
    return 0;
}

