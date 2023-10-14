/* 
Name:Abdul Rahman Azam 
Date: 3-oct-2023 
Description: multiplication of 2x2 matrix
*/
#include<stdio.h>
//output of the required matrix
int output(int arr[2][2]){
    int i, j;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}//input of the required matrix
int input(int arr[2][2]){
    int i,j;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d ",&arr[i][j]);
        }
    }
}//multiplication of both matrix
int mul(int arr[2][2], int brr[2][2]){
    int crr[2][2]={0};
    int i,j,k,sum=0;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            for(k=0;k<2;k++){
                crr[i][j] += arr[i][k] * brr[k][j];
            }
                
        }
    }
    printf("The resultant is\n");
    return output(crr);
}
int main(){
    int arr[2][2],brr[2][2];
    int i,j,k,a,b,c;
    
    printf("Enter the value of first matrix\n");
    input(arr);
    output(arr);
    printf("Enter the value of second matrix\n");
    input(brr);
    output(brr);
    
    mul(arr,brr);
    
    
}//end main
