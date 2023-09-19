#include <stdio.h>
int main(){
	int n;
	printf("Enter any number = ");
	scanf("%d", &n);
	if(n % 3 == 0){
		printf("This number is multiple of 3");	
	}
	else{
		printf("This number is not multiple of 3 ");
	}
}//end main
