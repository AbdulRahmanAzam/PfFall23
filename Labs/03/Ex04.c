#include <stdio.h>

int main() {
    int op = 1500;
    int dis = op *  20/100;
    int sell = op - dis;
    
    printf(" original price %d", op );
    printf("\n discount price &d", dis);
    printf("\n selling price %d", sell);

    return 0;
}
