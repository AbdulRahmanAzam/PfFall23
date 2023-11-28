/*
creator: Abdul Rahman Azam
date: 28/11/2023
description: reading from a csv file and printing the column and rows with context
  */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 100

int format_line(char str[100])
{
    char buf[2] = ",";
    int cols = 0;
    char *col = strtok(str, buf);
    
    while (col != NULL) {
        cols++;
        col[strcspn(col, "\n")] = 0;
        printf("%-14s | ", col); 
        col = strtok(NULL, str);
    }

    printf("\n");
    return cols;
} 

void read_file(FILE *fptr)
{
    char str[SIZE];
    int rows = 0, cols = 0;

    
    while (!feof(fptr)) {
        rows = format_line(fgets(str, SIZE, fptr)); 
        cols++;
    }

    printf("\n\nrows: %d\n, cols: %d", cols, rows);
} 

int main()
{
    FILE *File = fopen("task1.csv", "r");
    read_file(File);
    fclose(File);

    return 0;
} 
