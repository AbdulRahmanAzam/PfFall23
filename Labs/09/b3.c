/*
name : Abdul Rahman Azam
roll no: 23k-0061
date : 31-oct-2023
discription : find GCD by euclides algorithm
    */
#include <stdio.h>
//by recursion;
int euclide(int a,int b){
    if(b<=0) return 1;
    return euclide(b,a%b);
}
int main(){
    int j= 1980;
    int k = 1617;
    int temp =1;
    printf("%d", euclide(j,k));
    //by loops p
    for(int i=0;temp != 0 ;i++){
        temp = j%k;
        j = k;
        k = temp;
    }
    printf("%d",j);
}
