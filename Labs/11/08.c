/*
Programmar: Abdul Rahman Azam
Date: 22-Nov-2023
Description: The hieght of the box must me less than tunnels height, write using structs, also write volume
*/

#include <stdio.h>
struct box{
    int height;
    int width;
    int length;
};
int main(){
    int tunnel_h = 41;
    struct box b1;
    
    printf("Enter width of the box ");
    scanf("%d",&b1.width);
    printf("Enter length of the box ");
    scanf("%d",&b1.length);
    printf("Enter height of the box ");
    scanf("%d",&b1.height);
    
    int vol = b1.height * b1.width * b1.length;
    if(b1.height < tunnel_h){
        printf("%d",vol);
    }else{
        printf("\n");
    }
}
