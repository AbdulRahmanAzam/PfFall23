/* 
Name:Abdul Rahman Azam 
Date: 8-oct-2023 
Description: swap two integers
  */
#include <stdio.h>
int swap(int a, int b){
    // it is the type of formula for swapping two integers without using third variable
    a = a - b;
    b = a + b;
    a = b - a;
    // it is another type of formula for swapping two integers without using third variable
    // a = a ^ b;
    // b = a ^ b;
    // a = a ^ b;
    printf("num1 = %d\n num2 = %d ",a,b);
}//end swap
int main() {
    int a,b;// iniitialization
    printf("Enter the value of num1 = ");
    scanf("%d" , &a);
    
    printf("\nEnter the value of num2 = ");
    scanf("%d", &b);
    
    swap(a,b);
    return 0;
}//end main
