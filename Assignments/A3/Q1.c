/* programmer: Abdul Rahman Azam (23k-0061)
  Date: 12/7/2023
  Description: use argc and argv and put the max value fromthe box of 2 col and 2 row consecutivly into another array which will be filled with max values of hte first array
*/
#include <stdio.h>
#include <stdlib.h>
int i,j,a,b;
void maximum_value(int **arr, int size) {
    for ( i = 0; i < size; i += 2) {
        for ( j = 0; j < size; j += 2) {
            int max = arr[i][j];
            for ( a = 0; a < 2; a++) {
                for ( b = 0; b < 2; b++) {
                    if (max < arr[i + a][j + b]) {
                        max = arr[i + a][j + b];
                    }
                }
            }
            printf("%d\t", max);
        }
        printf("\n");
    }
}

int main(int argc, char const *argv[])
{
	int size = atoi(argv[1]);

	while (!(size == 2 || size == 4 || size == 8)) {
		printf("Incorrect dimension\nEnter dimension again: ");
		scanf("%d", &n);
	}
	
    FILE *fptr;
    fptr = fopen(arg[2], "r");

    if (fptr == NULL) {
        printf("Error reading File");
        return 0;
    }


   	int** arr= malloc(size*sizeof(int*));
    int* crr= malloc(size*size*sizeof(int));
    
    for( i=0;i<size;i++){
        arr[i] = crr+(i*size);
    }

    for ( i = 0; i < size; i++) {
        for ( j = 0; j < size; j++) {
            if (fscanf(fptr, "%d", &arr[i][j]) != 1) {
                fclose(fptr);
                return 1;
            }
        }
    }

    fclose(fptr);

    // Print the original matrix
    for ( i = 0; i < size; i++) {
        for ( j = 0; j < size; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    // Find and print maximum values in sub-blocks
    maximum_value(arr, size);

    // Free allocated memory
    for ( i = 0; i < size; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}
