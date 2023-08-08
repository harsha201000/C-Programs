#include <stdio.h>

int main(){
    
    char name[6];
    int age;

    printf("\n Enter your name : ");
    scanf("%s", &name);

    printf("\n Enter your age : ");
    scanf("%d", &age);

    printf("\n Hello %s, You are %d years old.", name, age);

    return 0;
    
}