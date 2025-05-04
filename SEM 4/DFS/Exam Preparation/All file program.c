#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int pos;

    // fopen() - Open file for writing
    fp = fopen("example.txt", "w+");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // fprintf() - Write formatted output to file
    fprintf(fp, "This is a test file.\n");

    // putc() - Write a character to the file
    putc('A', fp);

    // putw() - Write an integer to the file
    putw(12345, fp);
    
     putw(12345, fp);

    // rewind() - Move the file pointer to beginning
    rewind(fp);

    // fscanf() - Read formatted input from file
    char str[50];
    fscanf(fp, "%[^\n]", str);
    printf("Read using fscanf: %s\n", str);

    // getc() - Read a character from the file
    ch = getc(fp);
    printf("Read character using getc: %c\n", ch);

    // getw() - Read an integer from the file
    int num = getw(fp);
    printf("Read number using getw: %d\n", num);

    // fseek() - Move file pointer to specific location
    fseek(fp, 0, SEEK_END);

    // ftell() - Get the current position of the file pointer
    pos = ftell(fp);
    printf("File pointer position: %d\n", pos);

    // fclose() - Close the file
    fclose(fp);

    return 0;
}

