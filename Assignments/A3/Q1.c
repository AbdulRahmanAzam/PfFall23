#include <stdio.h>
int main(){
    int arr[4][4] = {
        {3,1,1,3},
        {2,5,0,2},
        {1,4,2,1},
        {4,7,2,4}
    };
    int brr[2][2];
    int a=2,b=2;
    int max =0;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            
            for(int k=i*2;k<(i*2)+2;k++){
                for(int l=j*2;l<(j*2)+2;l++){
                    if(arr[k][l] > max)  max = arr[k][l];
                }
            }
            brr[i][j] = max;    
            max =0;
        }
    }
    
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d",brr[i][j]);
        }
        printf("\n");
    }
    
}//end main
