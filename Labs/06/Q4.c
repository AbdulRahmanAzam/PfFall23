/* 
Name:Abdul Rahman Azam 
Date: 3-oct-2023 
Description: check the given number is perfect or not 
*/
#include <stdio.h>
int main(){
   int i, j ,k ,a,b,n;
   
   printf("Enter first number ");
   scanf("%d",&a);
   printf("Enter second number ");
   scanf("%d",&b);
   n=b;
   for(i=a; i<=n; i++){
       switch(a){
           case 1:
           printf("one ");
           break;
           case 2:
           printf("two ");
           break;
           case 3:
           printf("three ");
           break;
           case 4:
           printf("four ");
           break;
           case 5:
           printf("five ");
           break;
           case 6:
           printf("six ");
           break;
           case 7:
           printf("seven ");
           break;
           case 8:
           printf("eight ");
           break;
           case 9:
           printf("nine ");
           break;
       }
       if(a>9 && a % 2==0){
            printf("even ");
        }else if(a>9 && a%2!=0)  printf("odd ");
       a++;
   }//end i loop
   
   
   
}//end main
