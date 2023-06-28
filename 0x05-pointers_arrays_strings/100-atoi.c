#include "main.h"
#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

int _atoi(char *s)
{
    bool negative = false;
    long result = 0;
    int i = 0;

    if (s[i] == '-')
    {
        negative = true;
        i++;
    }

    while (s[i] != '\0')
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            result = result * 10 + (s[i] - '0');

            if (!negative && result > INT_MAX)
                return INT_MAX;
            else if (negative && (-1 * result) < INT_MIN)
                return INT_MIN;
        }
        else
        {
            break;
        }

        i++;
    }

    return negative ? -1 * result : result;
}
