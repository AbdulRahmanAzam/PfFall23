#include <stdio.h>

int main() {
    char oper;
    int a,b;

    printf("Enter the operator ");
    scanf("%c", &oper);
    
    printf("Enter the first operand ");// display and in input first operand
    scanf("%d", &a);
    
    printf("Enter the second operand ");// display and in input second operand
    scanf("%d", &b);
    
    switch(oper){
    case '+':
    printf("%d", a+ b);
    break;
    case '-':
    printf("%d", a-b);
    break;
    case '*':
    printf("%d", a*b);
    break;
    case '/':
    printf("%d", a/b);
    break;
    default:
    printf("you entered wrong operator");
    }
}//end main
