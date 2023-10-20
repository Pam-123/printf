#include "main.h"
#include <stdio.h>

/**
 * o_print - Prints an unsigned octal integer
 * @final_args: Arguments
 *
 * Return: Number of characters printed
 */
int o_print(va_list final_args)
{
	unsigned int num = va_arg(final_args, unsigned int);
	int compute = 0;

	compute = printf("%o", num);
	return (compute);
}
