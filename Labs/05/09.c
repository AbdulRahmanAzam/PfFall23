
#include <stdio.h>
int main(){
    int a, b,c; //inititalizing a,b,c
    
    printf("Enter the value of a ");
    scanf("%d", &a);
    
    printf("Enter the value of b ");
    scanf("%d", &b);
    
    printf("Enter the value of c ");
    scanf("%d", &c);
    
    float discr = (b *b) - 4*a*c; // calculating
    
    if(discr > 0){
        printf("The solution has two distinct real number solution\n");
        float root1 = (- b + sqrt(discr)) / (2*a);
        float root2 = (- b - sqrt(discr)) / (2*a);
        printf("root1= %.2f \nroot2= %.2f", root1, root2);
    }
    else if(discr == 0){
        printf("The solution has a repeated real number solution.");
    }else if(discr < 0){
        printf("Indicates neither of the solutions are real number");
    }
    
    
}//end main

