/* 
Name:Abdul Rahman Azam 
Date: 8-oct-2023 
Description: count the letter 'a' in a string
  */
#include <stdio.h>
#include <string.h>

int count(char *str, int x){
    int a=0;
    char *ptr = strchr(str,x);//from where first character of x matches, from there string is copied to ptr
    // eg, "mama" so ptr = ama after ptr+1 then ptr = ma and so on
    
    while(ptr!= NULL){
        a++;
        ptr = strchr(ptr+1,x);
    }
    
    return a;
}
int main(){
    char str[100] ;
    int i;
    char x;
    printf("Enter the name ");
    gets(str);
    // scanf(" %[^\]s ", str); // not working 
    
    printf("Enter the character ");
    scanf(" %c", &x);
    
    printf("%d ",  count(str,x));
}//end main

//if without strchr
// int count(char *str, int x){
//     int a=0;
//     for(int i =0; str[i] != '\0';i++){
//         if(str[i] == x){
//             a++;
//         }
//     }
//     return a;
// }
