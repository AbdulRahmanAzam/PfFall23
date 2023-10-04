#include <stdio.h>
int main(){
	int a;
	printf("Enter 8 bit integer ");
	scanf("%d", &a);

	int fourbit = (a / 1000000) % 10;
	int sevenbit = (a / 1000) % 10;
	
	if(fourbit && sevenbit){
		a = a - 1000000;
		a = a - 1000;
	}	
	printf("%d", a);		
}
