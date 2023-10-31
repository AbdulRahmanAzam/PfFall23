#include <stdio.h>
int swap(int *a, int *b){//here we use derefrencing of integers
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
int main() {
    int j = 2, k =5;
    printf("j=%d, k=%d\n",j,k);
    swap(&j,&k);//we must have to pass the address so that it can be changed
    printf("j=%d, k=%d",j,k);
    return 0;
}
