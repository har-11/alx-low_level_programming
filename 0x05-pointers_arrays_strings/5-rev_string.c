#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: Pointer to the string.
 *
 * This function reverses the characters in the given string in-place.
 */
void rev_string(char *s)
{
    int length = 0;
    int start = 0;
    int end = 0;
    char temp;

    /* Calculate the length of the string*/
    while (s[length] != '\0')
    {
        length++;
    }

    /* Reverse the string*/
    start = 0;
    end = length - 1;
    while (start < end)
    {
        /* Swap characters at start and end positions*/
        temp = s[start];
        s[start] = s[end];
        s[end] = temp;

        /* Move start and end positions towards the center*/
        start++;
        end--;
    }
}
