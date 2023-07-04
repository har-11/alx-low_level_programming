#include "main.h"

/**
 * print_numbers - print numbers
 * @i: intger
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
}
