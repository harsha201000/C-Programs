#include <stdio.h>
int main(){
     // variable =   Allocated space in memory to store a value.
    //                     We refer to a variable's name to access the stored value.
    //                     That variable now behaves as if it was the value it contains.
    //                     BUT we need to declare what type of data we are storing.
    
    // variables
    char name[] = "Harsha"; // array of characters
    int age = 13; // integer
    int grade = 8; // integer
    float price = 5.00; // float

    // printf statements
    printf("Hello %s!\n",name);
    printf("I am %d years old.\n",age);
    printf("I am in grade %d.\n",grade);
    printf("My toy truck costs %f.\n",price);
    // returns no errors
    return 0;
}