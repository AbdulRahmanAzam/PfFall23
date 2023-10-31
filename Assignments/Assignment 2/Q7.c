CORRECT AND COMPLETE IT

#include <stdio.h>
int main(){
    // int age,price;
    int arr[5][2] = {
        {16,1500},
        {17,1200},
        {9,950},
        {19,900},
        {18, 1800}
    };
    int age[5];
    int price[5];
    for(int i =0;i<5;i++){
        for(int j=0;j<2;j++){
            if(j==0) age[i] = arr[i][j];
            else if(j==1) price[i] = arr[i][j];
        }//end j loop
    }//end i loop
    
    for(int i =0;i<5;i++){
        printf("%d ", age[i]);
    }//end i loop
    
    for(int i =0;i<4;i++){
        for(int j=0;j<4;j++){
            if(age[j+1] <age[j]){
                int temp = age[j];
                age[j] = age[j+1];
                age[j+1] = temp;
            }
            if(price[j+1] >price[j]){
                int temp = price[j];
                price[j] = price[j+1];
                price[j+1] = temp;
            }
        }//end j loop
    }//end i loop
    printf("\n");
    for(int i =0;i<5;i++){
        printf("age %d price %d\n", age[i], price[i]);
    }//end i loop
    
}//end main
