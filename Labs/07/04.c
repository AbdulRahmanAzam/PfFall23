/* 
Name:Abdul Rahman Azam 
Date: 3-oct-2023 
Description: check whether the matrix is symmetric or not
*/
#include<stdio.h>
int input(int arr[3][3]){
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter the number = ");
            scanf("%d",&arr[i][j]);
        }
    }
}
int output(int arr[3][3]){
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
}
int check(int arr[3][3]){
    int i ,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(arr[i][j] != arr[j][i]){
                printf("Array is not symmetric\n");
                return;
            };
        }
    }
    return printf("Array is symmetric\n");
    
}
int main(){
    int i,j=0,k,a,b=0,n,c;
    int arr[100][100];
    input(arr);
    check(arr);
    
    output(arr);
}//end main
