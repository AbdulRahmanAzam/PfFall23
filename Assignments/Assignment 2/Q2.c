/*Name : Abdul Rahman Azam 
Roll no : 23k-0061
Date : 3-Nov-2023
Discription : find largest square sub matrix of 1's
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int count=0,b=0,c=2;
    int x=0,y=0;
    int arr[4][4] = {
        {1,0,1,1},
        {0,0,1,0},
        {1,1,1,1},
        {1,0,1,1},
    };
    int i,j,k,l;
    int brr[2][2];
    
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            count=0;
            for(k=i;k<i+2;k++){
                for(l=j;l<j+2;l++){
                    if(arr[k][l])count++;
                }
            }
            if(count==4){
               x=i;
               y=j;
            }
        }
    }
    printf("row = %d - %d \ncolumn = %d - %d",x,x+2,y,y+2);
}//end main
