/* 
Name:Abdul Rahman Azam 
Date: 3-oct-2023 
Description: takes a user input array and prints the sum of its elements.
*/
#include <stdio.h>
int main(){
    int sum=0,n,i,j;

   printf("Enter how many values you want to enter");
   scanf("%d",&n);
   int arr[n];
   
   for(j = 0; j<n; j++){
       scanf("%d",&arr[j]);
       sum = sum + arr[j];
   }
   printf("sum = %d", sum);
}//end main
