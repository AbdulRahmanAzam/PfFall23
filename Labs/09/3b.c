/* 
Name:Abdul Rahman Azam 
Date: 31-oct-2023 
Description: print fabonacci series using recursion
*/


#include <stdio.h>
int fabon(int a){
    if(a<=1) return 1;
    return fabon(a-1) + fabon(a-2);
}
int main(){
    int n = 20;
    for(int i=0;i<n;i++){
        printf("%d ",fabon(i));
    }
}
