#include <stdio.h>
#include <math.h>
int main(){
	int p;
	p = 0;

	int b;
	b = 0;

	printf("Enter Base ");
	scanf("%d", &b );
	
	printf("Enter perpendicular ");
	scanf("%d", &p);

	float Hyp = (p*p)+(b*b);

	printf("Hyp %f" , sqrt(Hyp));

}

