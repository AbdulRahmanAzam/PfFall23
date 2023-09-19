#include<stdio.h>

int main() {
    int i=0, j =1,k=0, n =3,m =1,o =1;
    printf("Enter value of n ");
    scanf("%d",&n);
    m=n;
    o=n;
    int a = n;
    n= n*2 -1;
    
    for(i=1; i<=n;i++){
        for(j=1;j<=n;j++){
            if(j ==m || j==o ){
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        if(i >=a){
         m = m+1;
         o=o-1;
        }
        else{
        m=m-1;
        o=o+1;
        }
        printf("\n");
    }
   
}//end main
