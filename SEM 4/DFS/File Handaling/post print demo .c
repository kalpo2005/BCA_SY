#include <stdio.h>

int main() {
    int i = 5;
    printf("-%d %d -%d %d %d -%d %d %d %d -%d %d\n", i, i++, i, i--, ++i, i, ++i+2, i++, i--,i, i++);
    return 0;
}

