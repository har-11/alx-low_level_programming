#include "main.h"
#include <stdio.h>

int _strlen(char *s) {
    int length = 0;

    while (*s != '\0') {
        length++;
        s++;
    }

    return length;
}

int main() {
    char *str = "Hello, World!";

    int length = _strlen(str);

    printf("Length of the string: %d\n", length);

    return 0;
}
