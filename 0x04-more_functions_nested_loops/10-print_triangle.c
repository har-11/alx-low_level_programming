#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: The size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		putchar('\n');
		return;
	}
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j <= i; j++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
