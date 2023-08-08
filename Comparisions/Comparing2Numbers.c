#include <stdio.h>

int main(){
    int x;
    int y;

    x = 100;
    y = 20;

    if(x > y){
        printf("\n %d is greater than %d", x , y);
    }
    else{
        printf("\n %d is greater than %d", y, x);
    }
}