#include<stdio.h>
void reverse(int *arr,int size){
    size--;
    for(int i=0;i<size;i++){
        int temp = arr[size];
        arr[size] = arr[i];
        arr[i] = temp;
        size--;
    }
}
int main(){
    int arr[10];
    printf("Enter the value of an array \n");
    
    for(int i =0;i<10;i++){
        scanf("%d", &arr[i]);
    }
    printf("\n");
    reverse(arr,10);
    for(int i =0;i<10;i++){
        printf("%d ",arr[i]);
    }
}
