/*
Programmar: Abdul Rahman Azam
Date: 21-nov-2023
description:
An automobile company has a serial number for engine parts starting from AA0 to FF9. The other
characteristics of parts to be specified in a structure are: Year of manufacture, material and quantity
manufactured.
● Specify a structure to store information corresponding to a part.
● Write a program to retrieve information on parts with serial numbers between BB1 and CC6.
*/
#include <stdio.h>
#include <string.h>
struct engine{
    char serial[4]; // serial no from AA0 to FF9
    int year;
    char material[10];
    int quantity;
};
void printingserials(struct engine eng[],char start[3],char end[3]){
    
    for(int i=0;i<3;i++){
        if(strcmp(eng[i].serial,start)>=0 && strcmp(eng[i].serial,end) <=0){
            printf("Year of manufacture %d\nmaterial %s\n quantity %d",eng[i].year,eng[i].material,eng[i].quantity);
        }
    }
}
int main(){
    struct engine eng[200];
    int j=0;
    char startserial[3] = "BB1";
    char endserial[3] = "CC6";
    int n=2;
    for(int i=0;i<1;i++){
        printf("\nEnter serial ");
        scanf("%s",&eng[i].serial);
        printf("Enter year ");
        scanf("%d",&eng[i].year);
        printf("Enter material ");
        scanf("%s",&eng[i].material);
        printf("Enter quantity ");
        scanf("%d",&eng[i].quantity);
    }
    printingserials(eng,startserial,endserial);
    
    printf("%d ",j);
}
