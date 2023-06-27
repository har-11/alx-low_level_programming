#include "main.h"

/**
 * main - reset to
 *
 * Return: always (0)
 */


int main(void)
{
	int number = 5;

	printf("Before reset: %d\n", number);
	reset_to_98(&number);
	printf("After reset: %d\n", number);
	return (0);
}

