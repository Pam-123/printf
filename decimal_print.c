#include "main.h"

/**
 * decimal_print - Prints a decimal
 * @final_args: My argument
 *
 * Return: Number of chars printed
 */
int decimal_print(va_list final_args)
{
	int i = 0, x = 1, sum = 0;
	unsigned int number = va_arg(final_args, int);
	
	if ((int)number < 0)
	{
		number *= -1;
		op_putchar('-');
		sum++;
	}
	for (; (number / x) > 9; i++)
	{
		x *= 10;
	}

	while (x > 1)
	{
		op_putchar('0' + (number / x) % 10);
		x /= 10;
		sum++;
	}
	return (sum);
}
