/* 
Name:Abdul Rahman Azam 
Date: 11-oct-2023 
Description: arrange array in ascending order
Input: {6, 3, 2, 7, 1, 5}
Output: {1, 2, 3, 5, 6, 7}
*/
#include<stdio.h>
int main(){
    int arr[6] = {6, 3, 2, 7, 1, 5}; //initislizing array
    
    for(int i=0;i<6;i++)//outer loop, which  check 1 by one
    {
        for(int j=i+1;j<6;j++) //inner loop, check elements except arr[i] and then replaces the arr[i] with arr[j] if arr[i] >arr[j]
        {
            if(arr[i]>arr[j]) // replacing if arr[i] >arr[j]
            {
               int temp = arr[i];
                arr[i] =arr[j];
                arr[j] =temp;
            }
            
        }
    }
    //printing array
    for(int i=0;i<6;i++)
    {
        printf("%d ",arr[i]);
    }
    
}//end main
