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
			puts("FizzBuzz");
		else if (i % 3 == 0)
			puts("Fizz");
		else if (i % 5 == 0)
			puts("Buzz");
		else
			putchar(i + '0');
		if (i < 100)
			putchar(' ');
	}
	return (0);
}
