#include <stdio.h>

int main(){
    int num1;
    int num2;
    int oper ;
    
    printf("Enter num1 : ");
    scanf("%d", &num1);
    
    printf("Enter num2 :");
    scanf("%d", &num2);
    
    printf("operator  ");
    scanf(" %s" , &oper);
    
    if(oper ==  '+' )
    printf("Answer: %d", num1 + num2);
    else if(oper ==  '-' )
    printf("Answer: %d", num1 - num2);
    else if(oper == '*')
    printf("Answer: %d", num1 * num2);
    else if(oper == '/')
    printf("Answer: %d", num1 / num2);
    
}
