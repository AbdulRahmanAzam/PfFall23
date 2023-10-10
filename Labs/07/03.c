/* 
Name:Abdul Rahman Azam 
Date: 3-oct-2023 
Description: count sum of digits
*/
#include<stdio.h>
int main(){
    int i,j=0,k,a,b=0,n,c;
     printf("Enter any number");
     scanf("%d",&n);
     
    for(i=0;i<n;i++){
         a = n%10;
         b = b+a;
        
        n = n/10;
    }
     printf("%d",b);
}//end main
