#include <stdio.h>

struct User{
    char name[10];
    int age;
};

int main(){

    struct User p1 = {"Siva", 42};
    struct User p2 = {"Durga", 40};
    struct User p3 = {"Harsha", 13};
    struct User p4 = {"Havisha", 10};

    struct User family_members[] = {p1, p2, p3, p4};

    for(int i = 0; i < sizeof(family_members)/sizeof(family_members[0]); i++){
        printf("%-10s\t", family_members[i].name);
        printf("%d\n", family_members[i].age);
    }

    return 0;
}