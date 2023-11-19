/*
Programmar: Abdul Rahman Azam
Date: 19-Nov-2023
Description: 
*/
  

#include <stdio.h>
#include <string.h>
void rev(char *str,int start, int end){
    while(start<end){
        int temp = *(str + start);
        *(str + start) = *(str + end);
        *(str + end) = temp;
        start++;
        end--;
    }
}
int revword(char *str){
    int start=0;
    for(int i=0;str[i] !='\0';i++){
        if(*(str + i+1) == ' ' || *(str + i+1) == '\0'){
            rev(str,start,i);
            start = i+2;
        }
    }
}
int main(){
    char str[] = "this is game";
    int n = strlen(str);
    printf("length = %d ",n);
    
    rev(str,0,n-1);
    revword(str);
    printf("\n%s",str);
}
