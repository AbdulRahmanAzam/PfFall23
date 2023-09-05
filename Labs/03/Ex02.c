#include <stdio.h>

int main(){
	int a;
	
	printf("Enter length: ");
	scanf("%d", &a);
		
	int b;
	printf("Enter width: ");
	scanf("%d", &b);

	int c;	
	printf("Enter breadth: ");
	scanf("%d", &c);

	int volume = a * b* c;
	printf("volume: %d", volume);

	return 0;
}
