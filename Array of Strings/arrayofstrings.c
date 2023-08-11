#include <stdio.h>
#include <string.h>

int main(){

    char cars[][15] = {"Honda","Acura","Tesla","Ford"};

    //cars[0] = "Honda"
    strcpy(cars[0], "Honda");

    for(int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++){
        printf("%s\n", cars[i]);
    }

    return 0;
}