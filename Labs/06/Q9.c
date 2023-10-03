/* 
Name:Abdul Rahman Azam 
Date: 3-oct-2023 
Description: to find the minimum and maximum number in an array.
*/
#include <stdio.h>

int main() {
    int i,n,min,max; //initialization
    int arr[10] = {4,1,6,8,10,21,8,9,2,6};//array
    min = arr[1];
    max= arr[1];
    for(i=0;i<10;i++){ //for loop starts
        if(min > arr[i]){ //check which number is less than min
            min = arr[i];
        }
        if(max < arr[i]){//check which number is less than max
            max = arr[i];
        }
    }
    printf("min is = %d\nmax is = %d",min,max);
    
    
    return 0;
}//end main






