/* 
Name:Abdul Rahman Azam 
Date: 8-oct-2023 
Description: count the letter 'a' in a string
  */
#include <stdio.h>
int count(char *str){
    int a=0;
    for(int i =0; str[i] != '\0';i++){
        if(str[i] == 'a' || str[i] == 'A'){
            a++;
        }
    }
    return a;
}
int main(){
    char str[] = "Abdul Rahman Azam" ;
    int i;
    // char *str[] = arr[];
    i = count(str);
    printf("%d", i);
}//end main
