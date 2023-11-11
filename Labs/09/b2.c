/* 
Name:Abdul Rahman Azam 
Date: 31-oct-2023 
Description: multiply two numbers without using multiplication
*/
#include <stdio.h>
int mul(int x,int y){
    int s;
    if(y==0) return 0;
    
    s = x + mul(x,y-1);
    return s;
}
int main(){
    int a = 3;
    int b = 4;
    int s = mul(a,b);
    printf("%d",s);
}
