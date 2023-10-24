/* 
Name:Abdul Rahman Azam 
Date: 8-oct-2023 
Description: count the letter 'a' in a string
  */
#include <stdio.h>
#include <string.h>
int count(char *str, int x){
    int a=0;
    for(int i =0; str[i] != '\0';i++){
        if(str[i] == x){
            a++;
        }
    }
    return a;
}
int main(){
    char str[100] ;
    int i;
    char x;
    printf("Enter the name ");
    // scanf(" %[^\]s ", str); // not working 
    gets(str);
    
    printf("Enter the character ");
    scanf(" %c", &x);
    
    i = count(str,x);
    printf("%d", i);
}//end main
