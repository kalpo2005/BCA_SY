#include <stdio.h>
#include <stdlib.h>

int main() {
    int *numbers, *readNumbers;
    int n, i;
    FILE *file;

    // --- Get array size ---
    printf("Enter how many numbers you want to store: ");
    scanf("%d", &n);

    // --- Allocate memory for the array ---
    numbers = (int *)malloc(n * sizeof(int));
    if (numbers == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // --- Get array elements from user ---
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // --- Write array to file using putw() ---
    file = fopen("arraydata.bin", "wb");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        free(numbers);
        return 1;
    }

    for (i = 0; i < n; i++) {
        putw(numbers[i], file);
    }

    fclose(file);
    free(numbers);  // Clean up after writing

    // --- Allocate memory for reading ---
    readNumbers = (int *)malloc(n * sizeof(int));
    if (readNumbers == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // --- Read array from file using getw() ---
    file = fopen("arraydata.bin", "rb");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        free(readNumbers);
        return 1;
    }

    for (i = 0; i < n; i++) {
        readNumbers[i] = getw(file);
    }

    fclose(file);

    // --- Display read array ---
    printf("\nNumbers read from file:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", readNumbers[i]);
    }
    printf("\n");

    free(readNumbers);  // Clean up after reading

    return 0;
}

