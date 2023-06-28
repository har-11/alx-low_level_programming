#include "main.h"
#include <stdio.h>

void print_rev(char *s) {
    int length = 0;

    // Calculate the length of the string
    while (*s != '\0') {
        length++;
        s++;
    }

    // Print the characters in reverse order
    for (int i = length - 1; i >= 0; i--) {
        putchar(*(s + i));
    }

    putchar('\n');
}
