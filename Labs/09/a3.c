#include<stdio.h>

int main(){
    int a[8] ;
    char b[8] ;
    long long int c[8] ;
    
    printf("Enter the value of integer \n");
    for(int i =0;i<5;i++){
        scanf("%d", &a[i]);
    }
    
    printf("Enter the value of character \n");
    for(int i =0;i<5;i++){
        scanf(" %c", &b[i]);
    }
    
    printf("Enter the value of long long integer \n");
    for(int i =0;i<5;i++){
        scanf("%lld", &c[i]);
    }
    
    for(int i =0;i<5;i++){
        printf("%d\t%p\t\t%c\t%p\t\t%lld\t%p\n ",*(a+i),a+i,*(b+i),(b+i),*(c+i),(c+i));
    }
}
