#include "main.h"

/**
 * binary_print - Prints Binary
 * @final_args: argument
 *
 * Return: Number of Chars printed
 */
int binary_print(va_list final_args)
{
	unsigned int w = va_arg(final_args, int);

	if (n >= 1)
	{
		binary_print(n / 2);
	}
	op_putchar((char)(n % 2 + '0'));
	return (1);
}
