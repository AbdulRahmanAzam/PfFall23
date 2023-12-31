/*
 * Name: Abdul Rahman Azam
 * Date: 3-nov-23
 * Description: flight booking system 
 */

#include <stdio.h>
void evening(int flights[5][5]){
    int bestoption=0,minprice=1000;
    printf("\nFlights available in the Evening:\n");
    for(int i=0;i<5;i++){
            if(flights[i][3]==1){
                printf("Day%d,",i+1);
                if(flights[i][4]<minprice){
                minprice=flights[i][4];
                bestoption=i+1;
                } // end nested if
            }// end if
    }// end i loop
    printf("\nBest Option for Evening Flights is on Day%d and Price is:%d\n",bestoption, minprice);
    return;
}// end Evening Flights Loop

void morning(int flights[5][5]){
    int bestoption,minprice=1000;
    printf("\nFlights available in the Morning:\n");
    for(int i=0;i<5;i++){
            if(flights[i][1]){
                printf("Day%d,",i+1);
                if(flights[i][2]<minprice){
                    minprice=flights[i][2];
                    bestoption=i+1;
                } // end nested if 
            }// end if
    }// end i loop
    printf("\nBest Option for Morning Flights is on Day%d and Price is:%d\n",bestoption, minprice);
    return;
}// end Morning Flights loop

void specificday(int flights[5][5]){
    int day;
    printf("\nWhich Day are you Looking for Flights (1-5):");
    scanf("%d", &day);
    
    if(flights[day-1][1])  printf("\nFlight is avalabile in Morning and Price is:%d\n",flights[day-1][2]);
    if(flights[day-1][3])  printf("Flight is avalabile in Evening and Price is:%d\n",flights[day-1][4]);
    if(flights[day-1][1] ==0 && flights[day-1][3] == 0) printf("Sorry flights are not Avaliable on this Day%d\n", day);    
    
    return;
}// end specific day calculation

void eachday(int flights[5][5]){
    for(int i=0;i<5;i++){
        printf("Day%d Flights available in ", i+1);
        if(flights[i][1]) printf("Morning ");
        if(flights[i][3]) printf("Evening ");
        printf("\n");
    }
    return;
}// end eachday function
int main() { 
    printf(" Day\t  Morining\t Price\t Evening\t Price\n 1 Monday\t  1\t   300\t    0\t     -\n     2 Tuesday\t  1\t   320\t    1\t    310\n    3 Wednesday  0\t    -\t    1\t    280\n    4 Thursday\t  1\t   380\t    0\t     -\n    5 Friday\t  1\t   375\t    1\t    400\n\n");
                    //Day Morning  price Evening price
    int flights[5][5]={ 1,    1,   300,   0,     00,
                        2,    1,   320,   1,     310,
                        3,    0,   00,    1,     280,
                        4,    1,   380,   0,      00,
                        5,    1,   375,   1,      400};
                        
    eachday(flights);                    
    morning(flights);
    evening(flights);
    specificday(flights);
}
