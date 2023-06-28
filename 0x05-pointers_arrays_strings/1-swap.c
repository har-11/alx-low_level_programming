#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap code
 *
 * @a :pointer to first integer
 * @b :pointer to second integer
 * Return: Always 0
 */


void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
