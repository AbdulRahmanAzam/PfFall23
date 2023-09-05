#include <stdio.h>

int main() {
    int south = 10 + 5;
    int north = 15;
    int east = 0;
    int west = 10;
    
    int fuel = 2 ;
    int km = south + north + east + west;
    printf ("Total kilometer it has covered: %d", km );
    printf ("\n Total fuel it has consumed: %d", km * fuel );
    
}
