/*
name : Abdul Rahman Azam
roll no: 23k-0061
date : 7-oct-2023
discription : keep tracking of all mobile id and branches 
*/
#include <stdio.h>
int main(){
    int x,y;
    int totalAll=0, totalEach =0, max=0,maxa=0,high=0,eachmax=0,a=0;
    
    printf("Enter value of x ");
    scanf("%d",&x);
    printf("Enter value of y ");
    scanf("%d",&y);
    x++,y++;
    int arr[x][y];
    for(int i=0;i<x-1;i++){
        printf("Enter branch id ");
        scanf("%d",&arr[i][0]);
    }
    
    for(int i=0;i<y-1;i++){
        printf("Enter mobile id ");
        scanf("%d",&arr[0][i]);
    }
    for(int i=1;i<x;i++){
        totalEach =0; 
        for(int j=1;j<y;j++){
            printf("Enter price of mobile ");
            scanf("%d",&arr[i][j]);
            totalAll += arr[i][j];
            totalEach += arr[i][j];
            if(max<arr[i][j]){
                max = arr[i][j];
                maxa = arr[i][0];
            }
            if(eachmax <totalEach ){
                eachmax = totalEach;
                a = i;
            }
        }
        printf("Total bill of This branch %d\n\n",totalEach);
    }
    
    printf("Total bill of all branches %d\nBranch ID where bill is max %d\nBranch and mobile id where bill are highest are \n",totalAll,arr[a][0]);
    
    for(int i=1;i<x;i++){
        printf("%d ,%d\n",arr[a][0],arr[a][i]);
    }
}
