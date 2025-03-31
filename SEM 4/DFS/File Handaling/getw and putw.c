#include <stdio.h>

int main() {
    FILE *my_file;
    char filename[] = "getw and putw.txt"; // Text file now
    int numbers[] = {10, 20, 30, 40, 50};
    int read_number;
    int i;

    // Write integers to the text file using fprintf
    my_file = fopen(filename, "w"); // "w" for write text mode
    if (my_file == NULL) {
        perror("Error opening file for writing");
        return 1;
    }

    for (i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++) {
        fprintf(my_file, "%d\n", numbers[i]); // Write each integer to the file, with a newline
    }

    fclose(my_file);
    printf("Integers written to %s\n", filename);

    // Read integers from the text file using fscanf
    my_file = fopen(filename, "r"); // "r" for read text mode
    if (my_file == NULL) {
        perror("Error opening file for reading");
        return 1;
    }

    printf("\nIntegers read from %s:\n", filename);
    while (!feof) { // Read integers until end of file
       fscanf(my_file, "%d", &read_number); printf("%d\n", read_number);
    }

    fclose(my_file);

    return 0;
}
