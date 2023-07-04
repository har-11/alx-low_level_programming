#include <stdio.h>

/**
 * largest_prime_factor - Finds the largest prime factor of a number
 * @n: The number
 *
 * Return: The largest prime factor
 */

long largest_prime_factor(long n)
{
	long i, largest_factor;

	largest_factor = -1;
		while (n % 2 == 0)
		{
			largest_factor = 2;
			n /= 2;
		}
		for (i = 3; i <= n; i += 2)
		{
			while (n % i == 0)
		{
			largest_factor = i;
			n /= i;
		}
		}
		return (largest_factor);
}
