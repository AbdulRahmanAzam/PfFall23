/*
creator: Abdul Rahman Azam
Date: 19-Nov-2023
Description: making a universal array printing function which can print any data type's array
*/

#include <stdio.h>
void universalprint(void *arr, int size,char cast){
    
    for(int i=0;i<size;i++){
        switch(cast){
            case 'i':
                printf("%d ", *((int*)arr +i));
                break;
            case 'c':
                printf("%c ", *((char*)arr + i));
                break;
            case 'f':
                printf("%.2f ", *((float*)arr +i));
                break;
        }
    }
    printf("\n");
    
}
int main(){
    
    int iarr[] = {1,2,3};
    char carr[] = {'A','B','C'};
    float farr[] = {3.55,2.5,7.9};
    
    universalprint(iarr,3,'i');
    universalprint(carr,3,'c');
    universalprint(farr,3,'f');
}
