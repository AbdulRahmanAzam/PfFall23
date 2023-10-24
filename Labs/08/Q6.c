#include <stdio.h>
int processArray(int *arr, int size){
    int max = arr[0];
    int min = arr[0];
    int sum =0;
    for(int i=0;i<size;i++){
        if(max<arr[i]){
            max = arr[i];
        }
        if(min > arr[i]){
            min = arr[i];
        }
        sum+= arr[i];
    }
    
    printf("max = %d min = %d  sum = %d ", max , min, sum);
}//end processArray
int main(){
    int arr[100] =  {4, 8, 1, 15, 6};
    int s,i;
    do{
      printf("Enter size of array ");
    scanf("%d", &s); 
    }while(s<=0 || s>=100);
    
    for(i=0;i<s;i++){
        printf("Enter value \n");
        scanf("%d", &arr[i]);
    }
    
    processArray(arr,s);
}//end main
