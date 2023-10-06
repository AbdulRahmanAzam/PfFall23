/* 
Name:Abdul Rahman Azam 
Date: 3-oct-2023 
Description: match-stick game between the computer and a user. at the end computer always wins
*/
#include <stdio.h>

int main() {
    printf("Rules for the game are as follows: 1)There are 21 matchsticks.\n 2)The computer asks the player to pick 1,2,3 or 4 match sticks.\n 3)After the person picks, the computer does its picking.\n 4)Whoever is forced to pick up the last matchstick loses the game.\n");
    int m=21,c,p; //intitialization of variables,  m is total number of matchsticks, c is for computer picked, and p is for player picked
    
    
    while(m>0|| m>=p){
    printf("Pick the value of matchsticks = ");
    scanf("%d",&p);
    
    switch(p){
        case 1:
            c = 4;
            break;
        case 2:
            c = 3;
            break;
        case 3:
            c =2;
            break;
        case 4:
            c=1;
            break;
        default:
            printf("Enter the correct value");    
    }
    m = m -p -c;
    if(m >0){
        printf("Computer picked = %d\nMatchsticks left = %d\n\n\n", c, m);
    }
    }
        printf("you lose");

    return 0;
}//edn main
