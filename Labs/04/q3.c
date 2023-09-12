/*
*programmer : Abdul Rahman Azam
*Date: 12/sep/2023
*Descrition: 
*related Files: 
*/

//--Include Files--//

//--Global Variables--//

#include <stdio.h>

int main(){
	int i= 0 ;
	int n = 0 ;
	int a = 0;
	int b = 0;
	printf("Enter any number n \n ");
	scanf("%d",&n);
	
	while(i < n){
	printf("Enter positive Integer ");
	scanf("%d",&a);
	
	i = i+1 ;	
	
	b = b + a * a ;
	
	
	};
	printf("%d", b);
	

}// end main
