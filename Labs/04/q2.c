/*
*Programmer: Abdul Rahman Azam
*Date: 12/Sep/2023
*Description: 
****
****
****
****

*Related Files: 
*/

//--Include Files--//

//--Global Variables--//

#include <stdio.h>

int main(){
    int n, i=0,j=0;//initialize n, i and j
    printf("Enter any positive Integer ");
    scanf("%d",&n);//putting value of n
    
    while(j < n){
        j = j+1; 
        while(i < n){
            i = i+1;
            printf("*");
        }//end while loop for *
	    
        i = 0;
        printf("\n");
    }//end while loop for break  line
    
}//end main
