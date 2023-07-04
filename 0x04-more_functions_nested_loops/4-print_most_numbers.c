#include "main.h"

/**
 * print_most_numbers - as its say
 *
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (i != 2 && i != 4)
		{
			putchat(i + '0');
		}
	}
	putchar('\n');
}
