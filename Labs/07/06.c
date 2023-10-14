/* 
Name:Abdul Rahman Azam 
Date: 11-oct-2023 
Description: find the frequency of each element in an array
Input: {2, 4, 2, 3, 5, 5, 4, 4}
output: 
frequency of 2 = 2
frequency of 4 = 3
frequency of 3 = 1
frequency of 5 = 2

*/
#include <stdio.h>
int main()
{
    int size, i, j, count;
    size =8;
    int arr[8] = {2, 4, 2, 3, 5, 5, 4, 4};
    int freq[100] = {0};
    for(i=0; i<size; i++){
        count = 1;
        for(j=i+1; j<size; j++){
            if(arr[i]==arr[j]){
                count++;
                freq[j] = -1;
            }
        }

        if(freq[i] != -1){
            freq[i] = count;
        }
    }
    for(i=0; i<size; i++){
        if(freq[i] != -1){
            printf("frequency of %d = %d\n", arr[i], freq[i]);
        }
    }
}//end main
