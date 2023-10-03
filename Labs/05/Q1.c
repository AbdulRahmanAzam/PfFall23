/*
Name:Abdul Rahman Azam
Date: 3-oct-2023
Description: check the given number is perfect or not
*/

#include <stdio.h>
int main(){
    int i ,sum; //initializing variables
    printf("Enter number ");
    scanf("%d",&n);

    for(i =1; i<n; i++){ //adding the values
        if(n % i==0){
            sum = sum +i;
        }
    }//end i forloop
    if(sum == n){ //checking whether it is perfect or not
        printf(" it is a perfect number");
    }else{
        printf("it is not a perfect number");
    }
}//end main
