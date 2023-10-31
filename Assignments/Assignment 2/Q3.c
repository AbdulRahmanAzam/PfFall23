#include <stdio.h>
int main(){
    char arr[] = "Day      Morning  Price     Evening  Price";
    char brr[5][10] = {"Monday","Tuesday","Wednesday","Thursday", "Friday"};
    int mAvail[5] = {1,1,0,1,1};
    int mPrice[5] = {300,320,0,380,375};
    
    int eAvail[5] = {0,1,1,0,1};
    int ePrice[5] = {0,310,280,0,400};
    
    for(int i=0; arr[i] != '\0';i++){
        printf("%c", arr[i]);
        
    }
    printf("\n");
    for(int i=0; i <5;i++){
            printf("%-10s %-7d %-10d %-7d %-5d\n", brr[i], mAvail[i],mPrice[i],eAvail[i],ePrice[i] );
            if(mAvail[i] ==1 ){
                
                break;
            }
    }
    
    printf("\n");
    
    
    
    
}//end main
