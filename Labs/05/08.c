#include <stdio.h>
int main(){
	int intensity;
	printf("Enter light intensity ");
	scanf("%d", &intensity);
	
	if(intensity < 0 && intensity >1000){
	    break;
	}else if(intensity > 0 && intensity < 100){
        printf("lighting: low brightness");
	}else if(intensity > 100 && intensity <500){
	    printf("evening: moderate");
	}else if(intensity >500 && intensity < 1000){
	    printf("sunshine: exposure");
	}
    
}
