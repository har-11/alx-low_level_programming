#include "main.h"
#include <stdio.h>

/**
 * print_rev - reverse
 *@s: pointer
 */

void print_rev(char *s)
{
	int length = 0;
	int i;

	/* Calculate the length of the string*/
	while (s[length] != '\0')
{
		length++;
}

	/*Print the characters in reverse order*/
	for (i = length - 1; i >= 0; i--)
{
	putchar(s[i]);
}

	putchar('\n');
}
