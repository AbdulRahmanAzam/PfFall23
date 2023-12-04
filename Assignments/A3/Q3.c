#include <stdio.h>
int main(){
    FILE* personal = fopen("Personal.txt", "r");
    FILE* department = fopen("Department.txt","r");
    FILE* combine = fopen("Combine.txt","w+");
    
    
    
    
    fclose(personal);
    fclose(department);
    flose(combine);
}//end main
