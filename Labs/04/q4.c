/*
*programmer : Abdul Rahman Azam
*Date: 12/sep/2023
*Descrition: 
*related Files: 
*/

//--Include Files--//

//--Global Variables--//

#include <stdio.h>
#include <math.h>

int main(){
int a, b , c;
int root1, root2, undersquare;
	printf("Enter the value of x square");
	scanf("%d", &a);

	printf("Enter the value of x");
	scanf("%d",&b);

	printf("Enter the value of last constant");
	scanf("%d",&c);

	undersquare = sqrt(b *b - 4 *a *c);
	root1 = (-b + undersquare)/2 ;
	root2 = (-b - undersquare)/2;

	 printf("%d",root1);
	 printf("%d",root2);		

}//end main
