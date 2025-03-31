#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char filename[] = "data.txt";

    // Write some data to the file
    file = fopen(filename, "w");
    if (file == NULL) {
        perror("Error opening file for writing");
        return 1;
    }

    fprintf(file, "This is line 1.\n");
    fprintf(file, "This is line 2.\n");
    fprintf(file, "This is line 3.\n");
    fprintf(file, "1234567890\n"); // Add some numbers for demonstration
    fclose(file);

    // Read and manipulate the file using fseek and ftell
    file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file for reading");
        return 1;
    }

    long position;
    char buffer[100];

    // 1. Get the current position using ftell
    position = ftell(file);
    printf("Current position: %ld\n", position); // Should be 0 at the start

    // 2. Read the first line
    fgets(buffer, sizeof(buffer), file);
    printf("First line: %s", buffer);

    // 3. Get the current position after reading the first line
    position = ftell(file);
    printf("Position after reading line 1: %ld\n", position);

    // 4. Move to the beginning of the file using fseek
    fseek(file, 0, SEEK_SET); // SEEK_SET: beginning of file
    printf("Position after fseek to start: %ld\n", ftell(file));

    // 5. Read the first line again to verify fseek
    fgets(buffer, sizeof(buffer), file);
    printf("First line again: %s", buffer);

    // 6. Move to a specific position (e.g., after line 2)
    fseek(file, 16, SEEK_SET); //Go to the 17th byte.
    fgets(buffer, sizeof(buffer), file);
    printf("Line at byte 16: %s", buffer);

    //7. Move to a position relative to the current position.
    fseek(file, 5, SEEK_CUR); // move 5 bytes from the current position.
    fgets(buffer, sizeof(buffer), file);
    printf("Line after SEEK_CUR + 5 bytes: %s", buffer);

    //8. Find the end of the file.
    fseek(file, 0, SEEK_END);
    position = ftell(file);
    printf("File size: %ld bytes\n", position);

    fclose(file);

    return 0;
}
