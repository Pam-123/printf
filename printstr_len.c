#include "main.h"

/**
 * _strlen - Custom function to calculate string length
 * @compute_string: Input string
 *
 * Return: Length of the string
 */
int _strlen(char *compute_string)
{
        int len = 0;

        while (compute_string && *compute_string++)
                len++;
        return (len);
}
