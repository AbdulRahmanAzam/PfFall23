/* 
Name:Abdul Rahman Azam 
Date: 3-oct-2023 
Description: 
*/
#include <stdio.h>

int main() {
    int a, b ,i,j;
    printf("Enter first number ");
    scanf("%d", &a);
    
    for(i=0;i<=a;i++){
        if(i%2 ==0){
            printf("%d",i);
        }else printf(" ");
        
        printf("\t%d\t %d \t ",i,i);
        if(i%2 ==0){
            printf("%d\n",i);
            
        } else printf(" \n");
    }

    return 0;
}//end main
