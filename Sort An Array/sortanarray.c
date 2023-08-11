#include <stdio.h>

void sort_numbers(int array_of_numbers[], int size_of_num){
    for(int i = 0; i < size_of_num - 1; i++){
        for(int j = 0; j < size_of_num - 1; j++){
            if(array_of_numbers[j] > array_of_numbers[j+1]){
                int temp_var = array_of_numbers[j];
                array_of_numbers[j] = array_of_numbers[j+1];
                array_of_numbers[j+1] = temp_var;
            }
        }
    }
}

void print_array(int array_of_numbers[], int size_of_num){
    for(int i = 0; i < size_of_num; i++){
        printf("%d ", array_of_numbers[i]);
    }
}

int main(){

    int array_of_numbers[] = {5, 4, 2, 3, 1, 7, 9, 8, 6};
    int size_of_num = sizeof(array_of_numbers)/sizeof(array_of_numbers[6]);

    sort_numbers(array_of_numbers,size_of_num);
    print_array(array_of_numbers,size_of_num);



    return 0;
}