#include <stdio.h>

int main(){
	int  cost =0, saved=0, discounted=0;
	printf("Enter total cost of items");
	scanf("%d", &cost);
	
	if(cost >= 2000){
		saved = cost * 0.50;		
	}
printf("%d", saved);
}//end main
