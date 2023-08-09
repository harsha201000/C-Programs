#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

struct Car{
    bool sport;
    char color[50];
    char model[50];
    int year;
    double price;

};

int main(){
    // struct = collection of related members ("variables") 
   //          they can be of different data types
   //          listed under one name in a block of memory
   //          VERY SIMILAR to classes in other languages (but no methods)

   struct Car car2;

   car2.sport = true;
   strcpy(car2.color,"gray");
   strcpy(car2.model,"Acura RDX");
   car2.year = 2019;
   car2.price = 4000.00;

   printf("%s\n",car2.color,"gray");
   printf("%s\n",car2.model,"Acura RDX");
   printf("%d\n",car2.year);
   printf("%lf\n",car2.price);

   return 0;


}


