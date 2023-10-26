#include <stdio.h>
#include <math.h>
float calculateDiscount(int p, int v){
    if(p >= 50 && v >10){
        return 0.85;
    }else if(p >=30 && v >5){
        return 0.90;
    }
    return 1;
}//end calculateDiscount
int main(){
    int purchase, visit;
    float a;
    printf("Enter Customer's total purchase ");
    scanf("%d", &purchase);
    
    printf("Enter how many times he have visited ");
    scanf("%d", &visit);
    
    a =  calculateDiscount(purchase, visit);
    purchase = purchase * a; 
    printf("The calculated discount is %2f\n", 100 - 100 *a);
    printf("The discounted amount is = %d", purchase);
}//end main
