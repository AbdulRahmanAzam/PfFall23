/*
Programmar: Abdul Rahman Azam
Date: 21-NOv-2023
Descrtiption: make 2 structuires with nested and print the given data aby initialisation
  */

#include <stdio.h>
#include <string.h>
//structure of employee 
struct employee{
    int salary;
    char name[20];
    int id;
};
//struct of organisation
struct organisation{
    int size;
    char organisation_name[20];
    char organisation_number[20];
    struct employee emp; //nested loop emplpoyee
};
int main() {
    struct organisation org; //initialization of organisation
    //initializatoin with all the vbalues
    org.size = 123;
    strcpy(org.organisation_name, "NU-FAST");
    strcpy(org.organisation_number,"NUFAST123ABC") ;
    org.emp.salary = 40000;
    strcpy(org.emp.name ,"Linus Sebastian");
    org.emp.id = 127;
    
    //printing all the values
    printf("Thew size of structure organisation : %d\n",org.size);
    printf("%s\n",org.organisation_name);
    printf("%s\n",org.organisation_number);
    printf("%d\n", org.emp.id);
    printf("%s\n",org.emp.name);
    printf("%d",org.emp.salary);


    return 0;
}
