#include "main.h"
#include <stdio.h>

/**
 * X_print - Prints an unsigned hexadecimal integer (uppercase)
 * @final_args: Arguments
 *
 * Return: Number of characters printed
 */
int X_print(va_list final_args)
{
	unsigned int num = va_arg(final_args, unsigned int);
	int compute = 0;

	compute = printf("%X", num);
	return (compute);
}
