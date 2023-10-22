#include "main.h"

/**
 * unsigned_print - prints an unsigned integer
 * @final_args: list of arguments
 * Return: number of digits printed
 */
int unsigned_print(va_list final_args)
{
	int w = 1;
	int printed = 0;
	unsigned int unit = va_arg(final_args, unsigned int);

	while ((unit / w) > 9)
		w = w * 10;
	while (w > 0)
	{
		op_putchar('0' + (unit / w));
		unit = unit % w;
		w = w / 10;
		printed++;
	}
	return (printed);
}

