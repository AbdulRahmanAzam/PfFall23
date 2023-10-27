//NOT COMPLETED, CHECK AGAIN


#include <stdio.h>
int main(){
    int a=0,b=2,c=2;
    int x,y;
    int arr[4][4] = {
        {1,0,1,1},
        {0,1,1,0},
        {1,0,1,1},
        {1,0,1,1},
    };
    int i,j,k,l;
    int brr[2][2];
    
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            a=0;
            for(k=i;k<b;k++){
                for(l=j;l<c;l++){
                        if(arr[k][l]){
                            a++;
                            // printf("%d \n",arr[k][l]);
                        }           
                }//end l
            }//end k
            if(a== 4){
                // printf("\nhello%d %d %d\n",a, k,l);
                x=k;
                y=l;
            }
            
            if(c==4){
                c=2;
                b++;
            }
            c++;
            if(b==4){
                break;
            }
        }//end j 
    }//end i 
    
    printf("sx %d sy %d x %d y %d",x-2,y-2, x,y);
}//end main
