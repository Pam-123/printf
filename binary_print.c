#include "main.h"

/**
 * binary_print - Prints Binary
 * @final_args: Argument
 *
 * Return: Converted
 */
int binary_print(va_list final_args)
{
	unsigned int num;
	int s, j;
	unsigned int bin[32];

	num = va_arg(final_args, unsigned int);
	if (num == 0)
	{
		op_putchar('0');
		return (1);
	}
	for (s = 0; num > 0; s++)
	{
		bin[s] = num % 2;
		num /= 2;
	}
	for (j = (s - 1); j >= 0; j--)
	{
		op_putchar(bin[j] + '0');
	}
	return (s);
}
