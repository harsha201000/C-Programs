#include <stdio.h>
#include <stdlib.h>

int main(){

    // Variables
    int number = 10;
    int guess;
    int guess_count = 0;
    int guess_limit = 5;
    int out_of_guesses = 0;

    //while loop
    while(guess != number && out_of_guesses == 0){
        if(guess_count < guess_limit){
            printf("Enter a guess : ");
            scanf("%d", &guess);
            guess_count++;
        }

        else{
            out_of_guesses = 1;
        }
    }

    // if condition
    if(out_of_guesses != 0){
        printf("You Lost!\n");
        printf("The number is %d", number);
    }

    else{
        printf("You Win!");
    }

    return 0;

}