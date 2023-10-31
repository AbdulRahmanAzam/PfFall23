/* 
Name:Abdul Rahman Azam 
Date: 31-oct-2023 
Description: factorial of a number
*/
#include <stdio.h>
int fact(int n){
    int s;
    if(n==1) return 1;
    s= n * fact(n-1);
    return s;
}
int main(){
    int n =8;
    int a = fact(n);
    printf("%d", a);
}
