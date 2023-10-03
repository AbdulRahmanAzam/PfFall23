/* 
Name:Abdul Rahman Azam 
Date: 3-oct-2023 
Description: read n number of values in an array and display it in reverse order.
*/
#include <stdio.h>

int main() {
    int i,n;
    int prod=1;
    n=9;
    int arr[9] = {1,2,3,4,5,6,7,8,9};
    int count =0;
    
    for(i=n-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
    
    
    return 0;
}//end main






