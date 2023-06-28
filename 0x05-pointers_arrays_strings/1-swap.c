#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap code
 * @n: pointers
 *
 * Return: Always 0
 */


void swap_int(int *a, int *b);
int main()
{
	int a = 5;
    	int b = 10;

    	printf("Before swap: a = %d, b = %d\n", a, b);

    	swap_int(&a, &b);

    	printf("After swap: a = %d, b = %d\n", a, b);
	
    	return 0;
}

void swap_int(int *a, int *b)
{
	int temp = *a;
 	*a = *b;
	*b = temp;
}
