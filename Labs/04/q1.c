/*
*programmer : Abdul Rahman Azam
*Date: 12/sep/2023
*Descrition: 
*related Files:
*/

//--Include Files--//

//--Global Variables--//

#include <stdio.h>

int main() {
	int n, i=0, j=0; //initialize n, i and j
	printf("Input any number 'n': ");
	scanf("%d", &n);

	while (i < n){
		j = 0;
		printf("\n"); 
		
		while (j <= i) {
			printf("*");
			j = j+1;
		};//end while loop for *	
		
		i = i+1;
	};//end while loop for line break

}// end main


