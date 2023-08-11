#include <stdio.h>

int main(){
    // while loop = checks a condition, then executes a block of code if condition is true
    // do while loop = always executes a block of code once, then checks a condition

    int num = 0;
    int sum = 0;

    do{
        printf("Enter a number above 0 : ");
        scanf("%d", &num);
        if(num > 0){
            sum += num;
        }
    }while(num > 0);

    printf("sum : %d", sum);

    return 0;
}