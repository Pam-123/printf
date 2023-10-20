#include "main.h"
#include <stdio.h>

/**
 * x_print - Prints an unsigned hexadecimal integer (lowercase)
 * @final_args: Arguments
 *
 * Return: Number of characters printed
 */
int x_print(va_list final_args)
{
    unsigned int num = va_arg(final_args, unsigned int);
    int compute = 0;

    compute = printf("%x", num);
    return (compute);
}
