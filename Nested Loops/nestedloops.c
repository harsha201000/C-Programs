#include <stdio.h>
#include <stdlib.h>

int main(){

    // nested loop = a loop inside another loop

    int rows;
    int columns;
    char symbol;

    printf("Enter number of rows : ");
    scanf("%d", &rows);

    printf("Enter number of columns : ");
    scanf("%d", &columns);

    scanf("%c");

    printf("Enter a symbol : ");
    scanf("%c", &symbol);

    for(int x = 1; x <= rows; x++){
        for(int y = 1; y <= columns; y++){
            printf("%c", symbol);
        }
        printf("\n");
    }
    return 0;
}