#include <stdio.h>

/**
 * print_alphabet - print all alphabet in lawercase
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');
}
