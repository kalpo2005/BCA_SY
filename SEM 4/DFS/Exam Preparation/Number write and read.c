#include <stdio.h>
#include <stdlib.h>

int main() {
    int *numbers, *readNumbers;
    int n, i;
    FILE *file;

    // --- Ask user how many numbers ---
    printf("How many numbers do you want to enter? ");
    scanf("%d", &n);

    // --- Dynamically allocate memory ---
    numbers = (int *)malloc(n * sizeof(int));
    if (numbers == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // --- Input numbers from user ---
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // --- Write numbers to file ---
    file = fopen("numbers.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        free(numbers);
        return 1;
    }

    for (i = 0; i < n; i++) {
        fprintf(file, "%d\n", numbers[i]);
    }

    fclose(file);
    free(numbers);  // Free memory after writing

    // --- Read numbers from file ---
    readNumbers = (int *)malloc(n * sizeof(int));
    if (readNumbers == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    file = fopen("numbers.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        free(readNumbers);
        return 1;
    }

    for (i = 0; i < n; i++) {
        fscanf(file, "%d", &readNumbers[i]);
    }

    fclose(file);

    // --- Display numbers ---
    printf("Numbers read from file:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", readNumbers[i]);
    }

    free(readNumbers);  // Free memory after reading

    return 0;
}

