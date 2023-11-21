
#include <stdio.h>
#include <string.h>
struct date{
    char day[10];
    char month[10];
    int year;
};
int main(){
    struct date date[2];
    
    int n=2;
    for(int i=0;i<n;i++){
        printf("Enter day ");
        scanf("%s",&date[i].day);
        printf("Enter month ");
        scanf("%s",&date[i].month);
        printf("Enter year ");
        scanf("%d",&date[i].year);
    }
    if(strcmp(date[0].day,date[1].day) ==0 && strcmp(date[0].month,date[1].month) ==0 && strcmp(date[0].year,date[1].year)==0 ){
        printf("Dates are equal");
    }else{
        printf("Dates are not equal");
    }
}
