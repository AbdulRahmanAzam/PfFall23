#include <stdio.h>
int  decideCarUsage(int a, int b){
    if(a%2 == b%2){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    int p,a,b,c,d;
    
    printf("Enter number plate ");
    scanf("%d", &p);
    
    printf("Enter the day of the week ");
    scanf("%d", &d);
    
     int ans = decideCarUsage(p,d);
     if(ans == 1){
         printf("You should use car");
     }else{
         printf("Cant use car");
     }
     
}
