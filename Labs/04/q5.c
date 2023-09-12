/*
*Programmer : Abdul Rahman Azam
*Date: 12/sep/2023
*Descrition:  Asks DOB of two persons and then prints who is older.
*related Files: 
*/

//--Include Files--//

//--Global Variables--//

#include <stdio.h>

int main(){
    int a, b , c;
    int A, B, C;
    int year, month,date;
    
    //below taking all the inputs of first person
    printf("First person should enter his DOB Year");
    scanf("%d",&a );
    printf("First person should enter his DOB Month");
    scanf("%d",&b );
    printf("First person should enter his DOB Date");
    scanf("%d",&c );
    
    //below taking all the inputs of second person
    printf("Second person should enter his DOB Year");
    scanf("%d",&A );
    printf("Second person should enter his DOB Month");
    scanf("%d",&B );
    printf("Second person should enter his DOB Date");
    scanf("%d",&C );
    
    //taking difference
    year =  a - A; 
    month = b - B;
    date = c - C;
    
    if (year < 0 || year== 0 && month < 0 || year==0 && month==0 && date < 0){
        printf("First person is older than second person");
    }
    else if( year==0 && month==0 && date == 0){
        printf("Both are of equal age");
    }
    else {
        printf("second person is older");
    }
}//end main
