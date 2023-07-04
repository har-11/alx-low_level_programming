#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			putchar("FizzBuzz")
		else if (i % 3 == 0)
			putchar("Fizz");
		else if (i % 5 == 0)
			putchar("Buzz");
		else
			putchar(i + '0');
		if (i < 100)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
