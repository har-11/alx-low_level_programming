#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf(" %d ", n);

	if (n > 0) 
	{
		printf("is positive\n");
	} else if (n < 0) 
	{
		printf("is negative\n");
	} else
	{
		printf("is 0\n");
	}

	printf("\n");
	/* your code goes there */
	return (0);
}
