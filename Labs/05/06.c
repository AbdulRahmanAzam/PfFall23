#include <stdio.h>
int main(){
	int a;
	printf("Enter 8 bit integer ");
	scanf("%d", &a);
	if(a / 1000 && a / 1000000){
		a = a - 1000 ;
		a = a - 1000000;
	}	
	printf("%d", a);		
}
