#include "main.h"
#include <stdio.h>

/**
 * u_print - Prints an unsigned decimal integer
 * @final_args: Arguments
 *
 * Return: Number of characters printed
 */
int u_print(va_list final_args)
{
	unsigned int num = va_arg(final_args, unsigned int);
	int compute = 0;

	compute = printf("%u", num);
	return (compute);
}
