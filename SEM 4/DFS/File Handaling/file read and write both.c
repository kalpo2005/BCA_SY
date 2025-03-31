#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 256

int main() {
    FILE *file;
    char filename[] = "my_file.txt";
    char write_buffer[MAX_LINE_LENGTH];
    char read_buffer[MAX_LINE_LENGTH];

    // Write operation
    file = fopen(filename, "w"); // "w" for write mode, creates or overwrites
    if (file == NULL) {
        perror("Error opening file for writing");
        return 1;
    }

    printf("Enter lines to write to the file (type 'quit' to finish):\n");
    while (1) {
        fgets(write_buffer, sizeof(write_buffer), stdin); // Read input from the user

        // Check for the quit condition
        if (strcmp(write_buffer, "quit\n") == 0) {
            break;
        }

        fputs(write_buffer, file); // Write the input to the file
    }

    fclose(file); // Close the file after writing
    printf("Writing to file completed.\n");

    // Read operation
    file = fopen(filename, "r"); // "r" for read mode
    if (file == NULL) {
        perror("Error opening file for reading");
        return 1;
    }

    printf("\nContents of the file:\n");
    while (fgets(read_buffer, sizeof(read_buffer), file) != NULL) { // Read lines from the file
        printf("%s", read_buffer); // Print the read line to the console
    }

    fclose(file); // Close the file after reading
    printf("\nReading from file completed.\n");

    return 0;
}
