/* 
Name:Abdul Rahman Azam 
Date: 3-oct-2023 
Description: check the given number is perfect or not 
*/
#include <stdio.h>
int main(){
   int i, j ,k ,a,b,n;
   int GCD=0, LCM=0;
   printf("Enter first number ");
   scanf("%d",&a);
   printf("Enter second number ");
   scanf("%d",&b);
   if(a>b){
       n = a;
   }else n = b;
   for(i =n-1; i>=1; i--){
       if(a %i==0 && b%i==0){
          int GCD = i;
          int LCM = (a *b)/GCD;
        printf("GCD = %d\n", GCD);
        printf("LCM = %d", LCM);
        break;
       }
        
   }
   
   
}//end main
