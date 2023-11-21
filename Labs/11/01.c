/*
Programmar: Abdul Rahman Azam
Date: 21-nov-2023
description:make a structure of a student of
Roll number, Name, Department, Course, Year of joining Assume that there are not more than
450 students in the college.
● Print names of all students who joined in a particular year.
● Print the data of a student whose roll number is given.
  */
#include <stdio.h>
//structure to store information about students
struct students{
    int roll;
    char name[50];
    char department[5];
    char course[10];
    int year;
}var1;

//function to print name of students of a given year
void printstudentbyyear(struct students stud[],int maxstud,int givenyear){
    printf("Name students are \n");
    for(int i=0;i<maxstud;i++){
        if(stud[i].year==givenyear){
            printf("%s",stud[i].name);
        }
    }
}//end functioni
//function to print name of students of a given roll no
void printstudentbyrollno(struct students stud[],int maxstud,int givenroll){
    for(int i=0;i<maxstud;i++){
        if(stud[i].roll == givenroll){
            puts(stud[i].name);
            printf("%s\n",stud[i].department);
            printf("%s\n",stud[i].course);
            printf("%d\n",stud[i].year);
        }
    }
}//end function
//MAIN
int main() {
    int maxstud= 450; 
    struct students stud[450];
    int n=3;
    printf("Enter the values in the following sequence\n roll no\tname\tdepartment\tcourse\tyear\n");
    //taking input of all the informatin of the student
    for(int i=0;i<n;i++){
        printf("Enter roll no ");
        scanf("%d",&stud[i].roll);
        printf("Enter name ");
        scanf("%s",&stud[i].name);
        printf("Enter department ");
        scanf("%s",&stud[i].department);
        printf("Enter course ");
        scanf("%s",&stud[i].course);
        printf("Enter year ");
        scanf("%d",&stud[i].year);
    }
    int givenroll = 123;
    int givenyear = 2004;
    
    printstudentbyyear(stud,n,givenyear);
    
    printstudentbyrollno(stud,n,givenroll);
    return 0;
}
