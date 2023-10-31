/*Name : Abdul Rahman Azam (23k-0061)
Description : make batting performance of a cricket team
  */
  
#include <stdio.h>
int main() {
    int a,b,c;
    int i,j,k;
    int total=0, avg=0, highest=0, half_cent=0, cent=0;
    int arr[100][100] ;
    // { //for direct input
    //     {51,30,23},
    //     {67,100,12},
    //     {9,112,43},
    // };
    
    printf("Enter the number of batsman = ");
    scanf("%d",&b );
    
    printf("Enter number of innings = ");
    scanf("%d",&a);
    
    // input
    for(i=0;i<b;i++){
        for(j=0;j<a;j++){
            printf("Enter ");
            scanf("%d", &arr[i][j]);
        }//end j loop
    }//end i loop
    
    // CALCULATIONS
    for(i=0;i<b;i++){
        for(j=0;j<a;j++){
            total += arr[i][j];
            
            if(highest < arr[i][j]){
                highest = arr[i][j];
            }
            
            if(arr[i][j] >=100){
                cent++;
            }else if(arr[i][j] > 50 && arr[i][j] <100){
                half_cent++;
            }
        }//end j loop
        avg = total / a;
        
        printf(" Total = %d\n Average = %d\n Highest = %d\n number of centuries = %d\n number of half centuries = %d\n\n", total, avg,highest,cent,half_cent);
        total =0;
        avg =0;
        highest =0;
        half_cent = 0;
        cent = 0;
    }//end i loop
}//end main



