#include <stdio.h>

int main(){

    //continue = skips rest of the code & forces the next iteration of the loop
    //break = exits a loop and a switch

    for(int i = 1; i <=50; i++){
        if(i == 25){
            continue;
        }
        else if(i == 50){
            break;
        }
        printf("%d\n", i);
    }

    return 0;
}