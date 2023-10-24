/* 
Name:Abdul Rahman Azam 
Date: 24-oct-2023 
Description: make a calculator using functions
*/
#include <stdio.h>
int operate(int a, int b, char x){
    int i = 0;
    
    printf("%d", i);
    return i;
}//end operation
int mul(int a, int b ){
    return a *b;
}
int divide(int a, int b){
    return a/b ;
}
int sum (int a , int b){
    int n = a +b;
    return n;
}
int minus(int a, int b){
    int n = a -b; 
    return n;
}
int main(){
    int a =2,b=5;
    int n;
    char x ;
    printf("Enter first num = ");
    scanf("%d", &a);
    
    printf("Enter second number = ");
    scanf("%d", &b);
    
    printf("Enter the operator = ");
    scanf(" %c", &x);
    
    if(x == '*'){
        n = mul(a,b);
    }
    else if(x == '+'){
        n = sum(a,b);
    }else if(x == '-'){
        n = minus(a,b);
    }else if(x== '/'){
        n = divide(a,b);
    }
    
    printf("%d ", n);
}//end main
