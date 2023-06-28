#include "main.h"
#include <stdio.h>

int _atoi(char *s)
{
    int sign = 1;  /* Variable to store the sign of the number */
    int result = 0;  /* Variable to store the converted integer */
    int i = 0;  /* Index for iterating through the string */

    /* Check for sign */
    while (s[i] == '-' || s[i] == '+')
    {
        if (s[i] == '-')
            sign *= -1;

        i++;
    }

    /* Convert string to integer */
    while (s[i] >= '0' && s[i] <= '9')
    {
        /* Update the result by multiplying it by 10 and adding the digit */
        result = result * 10 + (s[i] - '0');
        i++;
    }

    return result * sign;
}
