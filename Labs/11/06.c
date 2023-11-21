/*
Programmar: Abdul Rahman Azam
Date: 21-Nov-2023
Description: make a structure of named date and after initialization add 45 to it and print the value
  */
#include <stdio.h>
// structure of date
struct Date{
    int day;
    int month;
    int year;
};
int main(){
    struct Date d1; // declaration of structure date to d1
  //structure initialisation
    d1.day = 21;
    d1.month = 11;
    d1.year = 2023;
    
    printf("%d %d %d\n",d1.day,d1.month,d1.year);
    int n=45;
  // calculations to add 45 days in a date
    d1.day += n;
    for(int i=0;d1.day>30;i++){
        if(d1.day > 30 ){
            d1.month += 1;
            d1.day -= 30;
        }
        
        if(d1.month >12){
            d1.year++;
            d1.month -=12;
        }
    }
    printf("%d %d %d",d1.day,d1.month,d1.year);
    
}
