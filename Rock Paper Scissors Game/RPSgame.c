#include <stdlib.h>
#include <stdio.h>

int main(){
    // 0, 1, 2 ,, 0 = Rock, 1 = Paper, 2 = Scissors
    int playermove, computermove;

    while(1){
        printf("\n Enter 0 for Rock, 1 for paper, 2 for scissors, 3 for exit : ");
        scanf("%d",&playermove);

        computermove = rand() % 3; //0, 1, 2
        if(playermove == 3){
            exit(1);
        }
        else if (playermove == 0 && computermove == 1){
            printf("\n You Lost, Paper beats Rock");
        }
        else if (playermove == 0 && computermove == 2){
            printf("\n You Won, Rock beats Scissors");
        }
        else if (playermove == 1 && computermove == 0){
            printf("\n You Won, Paper beats Rock");
        }
        else if (playermove == 1 && computermove == 2){
            printf("\n You Lost, Paper beats Scissors");
        }
        else if (playermove == 2 && computermove == 0){
            printf("\n You Lost, Scissors beats Rock");
        }
        else if (playermove == 2 && computermove == 1){
            printf("\n You Won, Scissors Beats Paper");
        }
        else{
            printf("It's a draw");
        }

    }
    return 0;
}