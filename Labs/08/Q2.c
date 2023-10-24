#include <stdio.h>
int operate(int a, int b, char x){
    int i = 0;
    if(x == '*'){
        i = a *b;
    }else if(x == '+'){
        i = a +b;
    }else if(x == '-'){
        i = a - b;
    }else if(x== '/'){
        i = a/b;
    }
    printf("%d", i);
    return i;
}//end operation
int main(){
    int a,b;
    char x = 0;
    printf("Enter first num = ");
    scanf("%d", &a);
    
    printf("Enter second number = ");
    scanf("%d", &b);
    
    printf("Enter the operator = ");
    scanf("%c", &x);
    
    operate(a,b,x);
}//end main
