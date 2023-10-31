/* 
Name:Abdul Rahman Azam 
Date: 31-oct-2023 
Description: print fabonacci series using recursion
*/
#include <stdio.h>
int fabon(int a,int b){
    if(b>=5) return printf("%d",a+b);
    
    
    printf("%d", a);
      fabon(b, a+b) ;
    return 1;
}
int main(){
    int n = 10;
    
    fabon(1,1);
    // printf("%d", s);
}
