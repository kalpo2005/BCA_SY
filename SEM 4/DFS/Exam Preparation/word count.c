#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024

int countWordOccurrences(char *line, const char *word) {
    int count = 0;
    char *token;
    char temp[MAX_LINE_LENGTH];

    strcpy(temp, line);  // Copy the line to avoid modifying original
    token = strtok(temp, " ,.\n");

    while (token != NULL) {
        if (strcmp(token, word) == 0) {
            count++;
        }
        token = strtok(NULL, " ,.\n");
    }

    return count;
}

int main() {
    FILE *file;
    char line[MAX_LINE_LENGTH];
    char word[100];
    int totalCount = 0;

    // --- Write user input to file ---
    file = fopen("data.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    printf("Enter lines (type 'END' to finish):\n");
    while (1) {
        printf("> ");
        fgets(line, MAX_LINE_LENGTH, stdin);

        if (strcmp(line, "END\n") == 0) {
            break;
        }

        fputs(line, file);
    }
    fclose(file);

    // --- Ask user for word to search ---
    printf("Enter word to search: ");
    scanf("%s", word);

    // --- Read from file and count word occurrences ---
    file = fopen("data.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    while (fgets(line, MAX_LINE_LENGTH, file)) {
        totalCount += countWordOccurrences(line, word);
    }

    fclose(file);

    printf("The word '%s' occurred %d times.\n", word, totalCount);

    return 0;
}

