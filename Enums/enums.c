#include <stdio.h>

enum Boolean{True = 0, False = 1};

int main(){
    
    // enum = a user defined type of named integer identifiers that helps to make a program more readable

    enum Boolean program_execution;
    program_execution = True;

    if(program_execution == True){
        printf("Process Finished with Exit Code 0");
    }
    else if (program_execution == False)
    {
        printf("There is an error in your program, Please fix the error");
    }
    else{
        printf("Invalid!");
    }
    

    return 0;
}