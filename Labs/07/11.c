/* Name : Abdul Rahman Azam
Describe : n x n matrix is given, matrix of (n-2) x (n-2) should be made which is having the max  
Date : 27/10/2023
  */
  

#include <stdio.h>
int check(int arr[5][5],int n ){
    int maxlocal[n-2][n-2];
    int max = 0;
    int a=n-2 ,b=n-2;
    int i,j,k,l;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            max=0;
            for(k=i;k<a;k++){
                for(l=j;l<b;l++){
                    if(max < arr[k][l]){
                        max = arr[k][l];
                    }
                }//end l loop 
            }//end k loop
            
            maxlocal[i][j] = max;
            if(b%5==0){
                a++;
                b=3;
            }else{
                b++;
            }
        }//end j loop
    }//end i loop
    for(i=0;i<n-2;i++){
        for(j=0;j<n-2;j++){
            printf("%d ", maxlocal[i][j]);
        }
        printf("\n");
    }
}//end check

int input(int arr[100][100], int n ){
    int i,j;
    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("enter");
            scanf("%d", &arr[i][j]);
        }
    }
}
int main() {
    
    int n;
    // int arr[n][n];
    int arr[5][5] = {
        {31,2,3,4,55},
        {6,7,8,9,0},
        {6,5,3,7,14},
        {5,4,3,2,1},
        {20,2,3,6,93},
    };
    printf("Enter the size of nxn matrix = ");
    scanf("%d", &n);
    
    // input(arr,n);
    check(arr,n);
    return 0;
}
