#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    FILE *fptr1 = fopen("blank1.docx","rb");
    FILE *fptr2 = fopen("blank2.docx","rb");

    fseek(fptr1, 0L, SEEK_END);
    int size1 = ftell(fptr1);
    rewind(fptr1);

    fseek(fptr2, 0L, SEEK_END);
    int size2 = ftell(fptr2);
    rewind(fptr2);

    char *buf1 = (char *)malloc(sizeof(char) * size1);
    char *buf2 = (char *)malloc(sizeof(char) * size2);

    fread(buf1, 1, size1, fptr1);
    fread(buf2, 1, size2, fptr2);
    printf("%s\n%s\n",buf1,buf2);

    if(!strcmp(buf1, buf2))  printf("Same");
    else printf("Not same");

    fclose(fptr1);
    fclose(fptr2);

    return 0;
}
