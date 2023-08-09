#include <stdio.h>
#include <stdlib.h>

int main(){
    char name[50];
    char color[50];
    char plural_noun[50];
    char celebrity[50];

    printf("Enter your name : ");
    scanf("%s", name);

    printf("Enter a color : ");
    scanf("%s", &color);

    printf("Enter a plural noun : ");
    scanf("%s", &plural_noun);

    printf("Enter a celebrity : ");
    scanf("%s", &celebrity);

    printf("%s is handsome\n", name);
    printf("Roses are %s\n", color);
    printf("%s are blue\n", plural_noun);
    printf("I like %s\n", celebrity);


    return 0;
}