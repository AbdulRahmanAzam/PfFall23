/*
Programmar: Abdul Rahman Azam
Date: 22-Nov-2023
Description: write two struct for student and register in which register is nested struct
*/
#include <stdio.h>
struct Register{
    int courseid;
    char coursename[20];
};
struct student{
    char firstName[20];
    char lastName[20];
    int cell;
    int id;
    char email[30];
    struct Register regis;
};
int main(){
    struct student std[5];
    
    for(int i =0;i<5;i++){
        printf("Enter Firstname ");
        scanf("%s",&std[i].firstName);
        printf("Enter Lastname ");
        scanf("%s",&std[i].lastName);
        printf("Enter cell number ");
        scanf("%d",&std[i].cell);
        printf("Enter id ");
        scanf("%d",&std[i].id);
        printf("Enter email ");
        scanf("%s",&std[i].email);
        printf("Enter course id ");
        scanf("%d",&std[i].regis.courseid);
        printf("Enter  course name ");
        scanf("%s",&std[i].regis.coursename);
    }
    
    for(int i=0;i<5;i++){
        printf("\nFirst name: %s\nLast name:%s\nCell no:%d\nstudents id:%d\nEmail: %s\nCourse Id: %s\nCourse name",
        std[i].firstName,std[i].lastName,std[i].cell,std[i].id,std[i].email,std[i].regis.courseid,std[i].regis.coursename);
    }
}
