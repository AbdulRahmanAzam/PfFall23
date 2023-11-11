#include <stdio.h>
int euclide(int a,int b){
    if(b<=0) return 1;
    return euclide(b,a%b);
}
int main(){
int j= 1980;
int k = 1617;
  printf("%d", euclide(j,k));
}
