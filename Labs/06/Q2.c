/* 
Name:Abdul Rahman Azam 
Date: 3-oct-2023 
Description: check the given number is perfect or not 
*/

#include <stdio.h>
int main(){
    int i,sum=0,prev=0,a=0,b=1,total=0; //initializing variables
    int fab = 10000;
    for(i=1; sum <= fab; i++){
        a = b;
        b =sum;
        sum = a+b;
        if(sum %3 ==0 || sum %5==0|| sum %7==0){ //check divisble by 3, 5 or 7
            total = total + sum;
        }
        if(sum > fab){
            break;
        }
    }//end i loop
    printf("The sum is %d", total);
    
}//end main
