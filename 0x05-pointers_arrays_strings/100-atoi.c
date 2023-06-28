#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the string.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
    int sign = 1;  /* Variable to store the sign of the number */
    int result = 0;  /* Variable to store the converted integer */

    /* Check for sign */
    if (*s == '-')
    {
        sign = -1;
        s++;
    }
    else if (*s == '+')
    {
        s++;
    }

    /* Convert string to integer */
    while (*s != '\0')
    {
        if (*s >= '0' && *s <= '9')
        {
            /* Update the result by multiplying it by 10 and adding the digit */
            result = result * 10 + (*s - '0');
        }
        else
        {
            /* If a non-digit character is encountered, stop converting */
            break;
        }

        s++;
    }

    return result * sign;
}
