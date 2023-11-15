/*Name : Abdul Rahman Azam 
Roll no : 23k-0061
Date : 3-Nov-2023
Discription : Multiplyiing the number till it became zero by divide and give its persistence
*/
#include <stdio.h>
int main(){
    int n,a=1,per=0,check=0;
    do{
        printf("Enter the positive integer = ");
        scanf(" %d ", &check);
        if(check == 0) break;// when a string assign to integer it will become 0 automatically
        printf("persistence");
        n = check;
        a = n;
        while(a/10 >0 ){
            n = a;
            a=1;
            while(n >0){
                a *= n % 10;
                n = n/10;
            }
            per++;
        }
        //since the number divisible by 10 gives more than 1 so it must only be 1
        if(check>10 && check%10==0) per =1;
        printf(" %d\n\n ",per);
        per=0;
    }while(check != 0 );
}//end main
