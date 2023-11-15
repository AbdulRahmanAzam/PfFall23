#include <stdio.h>
void print(int arr[5][2]){
    for(int i=0;i<5;i++){
        for(int j=0;j<2;j++){
            printf("%d     ",arr[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int arr[5][2] = {
        {16,1500},
        {17,1200},
        {9,950},
        {19,900},
        {18, 1800}
    };
    for(int i =0;i<5;i++){
        for(int j=0;j<4;j++){
            if(arr[j+1][0] < arr[j][0]){
                int temp = arr[j][0];
                arr[j][0] = arr[j+1][0];
                arr[j+1][0] = temp;
                
                int temp2 = arr[j][1];
                arr[j][1] = arr[j+1][1];
                arr[j+1][1] = temp2;
            }
        }//end j loop
    }//end i loop
    
    printf("Age    Price\n");
    print(arr);
    
    for(int i =0;i<5;i++){
        for(int j=0;j<4;j++){
            if(arr[j][1] < arr[j+1][1]){
                int temp = arr[j][1];
                arr[j][1] = arr[j+1][1];
                arr[j+1][1] = temp;
                
                int temp2 = arr[j][0];
                arr[j][0] = arr[j+1][0];
                arr[j+1][0] = temp2;
            }
        }//end j loop
    }//end i loop
    printf("\n\nPrice    Age\n");
    print(arr);
    
}//end main
