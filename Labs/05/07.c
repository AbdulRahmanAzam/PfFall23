#include <stdio.h>
int main(){
	int total, discount,actual;
	printf("Enter the actual amount  ");
	scanf("%d", &actual);
    
    if(actual > 2000 && actual <= 4000){
        discount = actual * 0.2;
    }else if(actual > 4000 && actual <= 6000 ){
        discount = actual * 0.3;
    }else if(actual >6000 ){
        discount = actual * 0.5;
    }
    
        total = actual - discount;
    
    printf("actual= %d\ntotal= %d\ndiscount = %d",actual,total, discount);
    
			
}
