#include <stdio.h>
int main(){
	char a;
	printf("Input a character ");
	scanf("%c", &a);
	
	if(a>= 32 && a<= 47 || a >= 58 && a<= 64 || a>= 91 && a<= 96 || a>= 123 && a<= 126){
		printf("It is special characters");
	}else if(a >= 67 && a<= 90){
		printf("It is capital alphabet");
	}else if(a >= 97 && a<= 123){
		printf("it is small alphabet");
	}else if( a < 32){
		printf("%d", a);	
	}

}//end main
