/*
Creator : Abdul Rahman Azam\
Date: 21-nov-2023
Desciption: make struct of employee and increase their salary according to given chart
*/


#include <stdio.h>
//struct made
struct employee{
    char name[20];
    int salary;
    int hours;
};
//function of increase salary useds pointer in structure
void increaseSalary(struct employee *emp){
    if(emp->hours>=8 && emp->hours <10){
        emp->salary += 50;
    }else if(emp->hours >=10 && emp->hours<12){
        emp->salary += 100;
    }else if(emp->hours>=12){
        emp->salary += 150;
    }
}

int main(){
    struct employee emp[10];//structure declaration
    //taking all the inputs
    for(int i=0;i<10;i++){
        printf("\nEnter the name of the employee ");
        scanf("%s",emp[i].name);
        printf("Enter the salary ");
        scanf("%d",&emp[i].salary);
        printf("Enter hours work per day");
        scanf("%d",&emp[i].hours);
        
    }
    //printing names and their salaries
    for(int i=0;i<10;i++){
        increaseSalary(&emp[i]); //call increasesalary function
        printf("Name: %s\n",emp[i].name);
        printf("Salary: %d\n",emp[i].salary);
    }
}//end main
