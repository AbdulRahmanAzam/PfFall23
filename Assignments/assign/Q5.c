/* ##Discription: find all ramanujan hardy number
  */
#include <stdio.h>
int main(){
    int n = 20;
    int i,j,k,l;
    
    for(i=1;i< n*n;i++){
        for(j=1;j<n*n;j++){
            for(k=j+1;k<n*n;k++){
                for(l=k+1;l<n*n;l++){
                    if(i*i*i + j*j*j == k*k*k + l*l*l  ){
                        printf("%d\n", i*i*i+j*j*j );
                    }
                }
            }//end k 
        }//end j
    }//end i 
    printf("done");
}//end main
