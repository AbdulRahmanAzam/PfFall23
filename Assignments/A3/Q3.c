#include <stdio.h>
#include <stdbool.h>
#include <string.h>
char arr[100][100] = {"101", "102", "103"};
int main()
{
    FILE *fper = fopen("Personal.txt", "r+");
    FILE *fdep = fopen("Department.txt", "r+");
    FILE *fcom = fopen("Combine.txt", "w+");

    if(fper == NULL){
        printf("error in personal file");
        return 1;
    }
    if(fdep == NULL){
        printf("Error in department file");
        return 1;
    }
    if(fcom == NULL){
        printf("Error in Combine file");
        return 1;
    }
    char buffer_per[100];
    char buffer_dep[100];
    int i = 0;
    char roll[5];
    int cont;
    
    do
    {
        bool flag = true;
        printf("Enter Roll id: ");
        scanf("%s", roll);
        
        rewind(fper);
        rewind(fdep);
        
        while (strcmp(buffer_per, roll) != 0){ 

            fscanf(fper, "%s", buffer_per);
            if(feof(fper)) {
                printf("Not found in personal, you have entered wrong roll no\n");
                flag = false;
                break;
            }
        }
        while (strcmp(buffer_dep, roll) != 0) {
            fscanf(fdep, "%s", buffer_dep);
            if(feof(fper)) {
                printf("Not found in department, you have entered wrong roll\n");
                flag = false;
                break;
            }
        }
        
            if(flag){
                fscanf(fper, "%s", buffer_per);
                fscanf(fdep, "%s", buffer_dep);

                fprintf(fcom, "%s ", roll);
                fprintf(fcom, "%s ", buffer_per);
                fprintf(fcom, "%s \n", buffer_dep);
            }
        printf("Do you want to input more roll no: \nEnter 1 to continue ||  0 to exit \n");
        
        scanf("%d", &cont);

    }while (cont);

    fclose(fper);
    fclose(fdep);
    fclose(fcom);
    printf("\n\ndone");
}
