#include <stdio.h>
#include <string.h>

typedef struct {
    char roll[3];
    char first[15];
    char last[15];
    int salary;
    char joining[20];
    char depart[10];
}Worker;

typedef struct {
    int id;
    char date[20];
    int amount;
}Bonus;

typedef struct{
    int id;
    char title[15];
    char affected[20];
}Title;

char *departs[3] = {"HR","Admin","Account"};

void print_details(Worker workers[8],int n){
    printf("|%3c%-11s |  %5c%-8s | %4c%-6s | %-2d | %s | %-7s |",' ',workers[n].roll,' ',workers[n].first,' ',workers[n].last,workers[n].salary,workers[n].joining,workers[n].depart);
    
}

int main(){
    Worker workers[8] = {
        {"001","Monika","Arora",100000,"2014-02-20 09 00 00","HR"},
        {"002","Niharika","Verma",100000,"2014-02-20 09 00 00","Admin"},
        {"003","Vishal","Singhal",100000,"2014-02-20 09 00 00","HR"},
        {"004","Amitabh","Singh",100000,"2014-02-20 09 00 00","Admin"},
        {"005","Vivek","Bhati",100000,"2014-02-20 09 00 00","Admin"},
        {"006","Vipul","Diwan",100000,"2014-02-20 09 00 00","Account"},
        {"007","Satish","Kumar",100000,"2014-02-20 09 00 00","Account"},
        {"008","Geetika","Chauhan",100000,"2014-02-20 09 00 00","Admin"}
    };
    
    Bonus bonus[5] = {
        {1,"2016-02-20 00:00:00",5000},
        {2,"2016-06-11 00:00:00",3000},
        {3,"2016-02-20 00:00:00",4000},
        {4,"2016-02-20 00:00:00",4500},
        {5,"2016-06-11 00:00:00",3500}
    };
    
    Title title[8] = {
        {1,"Manager","2016-06-11 00:00:00"},
        {2,"Executive","2016-06-11 00:00:00"},
        {8,"Executive","2016-06-11 00:00:00"},
        {5,"Manager","2016-06-11 00:00:00"},
        {4,"Asst. Manager","2016-06-11 00:00:00"},
        {7,"Executive","2016-06-11 00:00:00"},
        {6,"Lead","2016-06-11 00:00:00"},
        {3,"Lead","2016-06-11 00:00:00"},
    };
    
    int max_amount=0;
    int pos=0;
    printf("Details of the workers having maximum salaries for each department\n\n");
    for(int i=0;i<3;i++){
        max_amount=0;
        pos=0;
        for(int j=0;j<8;j++){
            if(!strcmp(workers[j].depart,departs[i]) ){
                if(max_amount < workers[j].salary){
                    max_amount = workers[j].salary;
                    pos = j;
                }  
            }
        }
        print_details(workers,pos);
        printf("\n");
    }
    
    printf("\n\nTotal salaries paid in the department\n\n");
    for(int i=0;i<3;i++){
        max_amount=0;
        for(int j=0;j<8;j++){
            if(!strcmp(workers[j].depart,departs[i]) )
                 max_amount += workers[j].salary;
        }
        printf("%s - %d",departs[i],max_amount);
    }
}//end main


