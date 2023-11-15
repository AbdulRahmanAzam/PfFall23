/*
#Name : Abdul Rahman Azam 
##Roll no : 23k-0061
##Date : 3-Nov-2023
##Discription: find all ramanujan hardy number
*/
#include <stdio.h>
int main(){
    int n=0;
    int i,j,k,l;
    printf("Enter the value of n for Ramanujan Hardy no less than n^3 = ");
    scanf("%d",&n);
    for(i=1;i< n*n;i++){
        for(j=1;j<n*n;j++){
            for(k=j+1;k<n*n;k++){
                for(l=k+1;l<n*n;l++){
                    if(i*i*i + j*j*j == k*k*k + l*l*l  ){
                        printf("%d\n", i*i*i+j*j*j );
                    }
                }
            }//end k 
        }//end j
    }//end i 
}//end main
