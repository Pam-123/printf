#include "main.h"

/**
 * unsigned_print - a function that converts %u to print the original number
 * @final_args: the argument in the va_list
 * Return: the length of the unsigned int
 */

int unsigned_print(va_list final_args)
{
	int ijk = 1;
	int amount = 0;
	unsigned int unit;

	unit = va_arg(final_args, unsigned int);

	while ((unit / ijk) > 9)
		ijk = ijk * 10;
	while (ijk > 0)
	{
		op_putchar('0' + (unit / ijk));
		unit = unit % ijk;
		ijk = ijk / 10;
		amount++;
	}
	return (amount);
}
