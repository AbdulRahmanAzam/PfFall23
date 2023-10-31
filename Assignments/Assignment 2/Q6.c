/* ##Discription: find all different number pairs that are equal to target
*/
  
#include <stdio.h>
int main(){
    int arr[100] = {1, 8, 10, 12, 7, 4, 3};
    int target = 11;
    for(int i =0;i<7;i++){
        for(int j=i+1;j<7;j++){
            if(arr[i] + arr[j] == target ){
                printf("(%d, %d) ",arr[i],arr[j]);
            }
        }//end j loop
    }//end i loop
}//end main
