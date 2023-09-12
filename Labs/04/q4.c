/*
*programmer : Abdul Rahman Azam
*Date: 12/sep/2023
*Descrition: Using Quadratic formula to give the answer
*Related Files: 
*/

//--Include Files--//

//--Global Variables--//

#include <stdio.h>
#include <math.h>

int main(){
int a, b , c; //initializing a b c
int root1, root2, undersquare; //root1 and root 2 for answers and undersquare is extra to calculate
	printf("Enter the value of x square = ");
	scanf("%d", &a);// ask value of x  square

	printf("Enter the value of x = ");// ask value of x  
	scanf("%d",&b);

	printf("Enter the value of last constant = ");// ask value of constant
	scanf("%d",&c);

	undersquare = sqrt(b *b - 4 *a *c);
	root1 = (-b + undersquare)/2 ;//calculations
	root2 = (-b - undersquare)/2;

	 printf("x = %d\n",root1);
	 printf("x = %d",root2);		

}//end main
