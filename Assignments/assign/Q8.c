Description : 
#include <stdio.h>
int main(){
    int n,a=1;
    do{
        printf("Enter the positive integer = ");
        scanf(" %d ", &n);
        if(n == 0) break;// when a string assign to integer it will become 0 automatically
        printf("persistence");
        a = n;
        while(a/10 >0 ){
            n = a;
            a=1;
            while(n >0){
                a *= n % 10;
                n = n/10;
                
            }
            printf(" %d ", a);
        }
        printf("\n\n");
        
    }while(n == 0 );
    
}//end main
