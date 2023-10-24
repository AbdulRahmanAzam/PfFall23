/* 
Name:Abdul Rahman Azam 
Date: 8-oct-2023 
Description: make a login system
  */
#include <stdio.h>
#include <string.h>
int main(){
    int a,b;
    int pass[100];
    int stored = "Secure123";
    
    do {
        printf("Enter password");
        gets(pass);
        
        a = strcmp(pass,stored);
        if(a ==0){
            printf("Welcome to the page, Login confirmed");
        }else{
            printf("wrong password \n");
        }
    }while(strlen(pass) <8  && a != 0);
    
}//end main
