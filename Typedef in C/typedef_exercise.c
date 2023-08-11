#include <stdio.h>

typedef struct{
    char username[30];
    char mail_id[50];
    char password[25];
} User;


int main(){

    // typedef = reserved keyword that gives an existing datatype a "nickname"

    User user1 = {"Harsha", "harshamalipeddi2010@outlook.com","Harsh@2010$"};
    User user2 = {"Code", "code.vscode@visualstudio.com","Vscode2013$"};

    printf("%s\n", user1.username);
    printf("%s\n", user1.mail_id);
    printf("%s\n", user1.password);
    printf("%s\n", user2.username);
    printf("%s\n", user2.mail_id);
    printf("%s\n", user2.password);

    return 0;
}