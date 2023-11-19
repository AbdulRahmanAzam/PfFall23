/*
creator: Abdul Rahman Azam
Date: 19-Nov-2023
Description: making a universal array printing function which can print any data type's array
*/

#include <stdio.h>
void genericswap(void *a,void *b,char cast){
    
    switch(cast){
    
    case 'i':    
        *(int*)a = *(int*)a ^ *(int*)b;
        *(int*)b = *(int*)a ^ *(int*)b;
        *(int*)a = *(int*)a ^ *(int*)b;
    break;
    case 'c':
        *(char*)a = *(char*)a ^ *(char*)b;
        *(char*)b = *(char*)a ^ *(char*)b;
        *(char*)a = *(char*)a ^ *(char*)b;
    break;
    case 'f':
        //we cannot use XOR in float data type
        *(float*)a = *(float*)a + *(float*)b;
        *(float*)b = *(float*)b - *(float*)a;
        *(float*)a = *(float*)a - *(float*)b;
    break;
    }
}
int main(){
    int i_a = 5, i_b = 7;
    char c_a = 'A', c_b = 'B';
    float f_a = 1.5, f_b = 2.3;
    
    // printf("Before\n a= %d  b= %d\n\n",a,b);
    printf("\n a= %d  b= %d",i_a,i_b);
    genericswap((void *)&i_a, (void *)&i_b,'i');
    printf("   a= %d  b= %d\n",i_a,i_b);
    
    printf("\n a= %c  b= %c",c_a,c_b);
    genericswap((void *)&c_a, (void *)&c_b,'c');
    printf("   a= %c  b= %c\n",c_a,c_b);
    
    printf("\n a= %.2f  b= %.2f",f_a,f_b);
    genericswap((void *)&f_a, (void *)&f_b,'f');
    printf("\n a= %.2f  b= %.2f\n",f_a,f_b);
}
