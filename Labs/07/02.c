/* 
Name:Abdul Rahman Azam 
Date: 3-oct-2023 
Description: reverse the array to d steps
Input: {1, 2, 3, 4, 5, 6, 7},
Output: {3, 4, 5, 6, 7, 1, 2}
*/
#include <stdio.h>
int reverse(){
    
}
int input(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    return;
}
int main(){
    int a,b,c=0,i,n,j,k,d;
    int arr[100];
    printf("Enter size of an array = ");
    scanf("%d",&n);
    printf("ENter the value of d = ");
    scanf("%d",&d);
    input(arr,n);
    for(j=0;j<d;j++){
      for(i=0;i<n-1;i++){
            int temp = arr[i+1];
            arr[i+1] = arr[i];
            arr[i] = temp;
        } 
    }
    // int arr[7] = {1,2,3,4,5,6,7};
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    
}









