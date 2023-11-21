/*
Programmar: Abdul Rahman Azam
Date: 21-Nov-2023
Description: make a structure of named date and after initialization add 45 to it and print the value
  */
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int n=50;
struct library{
  int accession_num;
  char name_author[20];
  char book[20];
  bool flag;
};
void information(struct library b[]){
    int acess; 
    printf("Enter accession number of the book ");
    scanf("%d",&acess);
    for(int i=0;i<n;i++){
        if(b[i].accession_num == acess){
        printf("Accession number: %d\n",b[i].accession_num);
        printf("Name of author: %s\n",b[i].name_author);
        printf("Book Title: %s\n",b[i].book);
        printf("The book is %s\n", (b[i].flag) ? "available": "not available");
        }
    }
}
void display_author(struct library b[],char author[20]){
    for(int i=0;i<n;i++){
        if(strcmp(b[i].name_author,author) == 0){
            printf("%s",b[i].book);
        }
    }
}
void display_title(struct library b[],char title[20]){
    int a=0;
    for(int i=0;i<n;i++){
        if(strcmp(b[i].book,title) ==0 ){
            a++;
        }
    }
    printf("The number of books of title %s is  %d\n",title,a);
}
void total_number(struct library b[],int total){
    int a=0;
    printf("The total number of books in the library are %d\n",total);
}
int new_book(struct library b[],int total){
    total++;
    printf("Accession number:\n");
    scanf("%d",&b[total].accession_num);
    printf("Name of author:\n");
    scanf("%s",&b[total].name_author);
    printf("Book Title:\n");
    scanf("%s",&b[total].book);
    b[total].flag = true;
    return total;
}
void issue(struct library b[], int* total){
    total--;
    int acession=0;
    printf("Enter the accession number of the book");
    scanf("%d",&acession);
    for(int i=0;i<n;i++){
        if(b[i].accession_num==acession){
            b[i].flag = false;
        }
    }
}
int main(){
    struct library b[n]; 
    int total=0;
    int ext=1;
    int choice=0;
    char author[20] = "bill";
    
        
        printf("1 Display book information \n");
        printf("2 Enter new book \n"); 
        printf("3 Display all the books of a particular author \n");
        printf("4 Display the number of books of a particular title \n");
        printf("5 Display the total number of books \n");
        printf("6 Issue a book\n");
    do{
        printf("Enter the serial of the task you want to have\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            information(b);    
            break;
            case 2:
            total = new_book(b,total);
            break;
            case 3:
            display_author(b,author);
            break;
            case 4:
            printf("Enter the name of the author");
            scanf("%s",&author);
            display_title(b,author);
            break;
            case 5:
            total_number(b,total);
            break;
            case 6:
            issue(b,&total);
            break;
        }
        printf("Do you want to get more information \n1 for Yes\n0for No");
        scanf("%d",&ext);
    }while(ext !=0);
}
