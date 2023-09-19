#include <stdio.h>

int main(){
	char n;
	printf("Are you sure to delete?");
	scanf("%c", &n);
	switch(n){

	case 'Y' :
		printf("Deleted Succesfully");
		break;
	case 'y':
		printf("Deleted Succesfully");	
		break;
	case 'N' :
		printf("Delete cancelled");
		break;
	case 'n':
		printf("Delete cancelled");	
		break;
	default:
		printf("choose the right option");
	}
}	
