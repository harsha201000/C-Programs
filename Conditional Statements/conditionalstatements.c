#include <stdio.h>
#include <stdbool.h>

int main(){
    int score = 100;

    if(score == 100){
        printf("Excellent");
    }
    else if(score > 90 || score < 100){
        printf("Awesome");
    }
    else if(score > 80 || score < 90){
        printf("Good");
    }
    else if(score > 70 || score < 80){
        printf("Okay");
    }
    else if(score > 60 || score < 70){
        printf("Poor");
    }
    else{
        printf("You failed, bad luck");
    }
    

    int age = 13;

    if(age >= 5 && age <= 18){
        printf("\nYou are elligible for school");
    }
    else{
        printf("\nYou are not elligible for school");
    }

    int x = 0;

    if(!x){
        printf("\nTrue");
    }
    else{
        printf("\nFalse");
    }

    bool is_robot = false;

    if(is_robot == true){
        printf("\nYou are a robot");
    }
    else{
        printf("\nYou are a human");
    }


    return 0;

}