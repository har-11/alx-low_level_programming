#include "main.h"
#include <stdio.h>

void _puts(char *str) {
    while (*str != '\0') {
        putchar(*str);
        str++;
    }
    putchar('\n');
}

int main() {
    char *str = "Hello, World!";

    _puts(str);

    return 0;
}
