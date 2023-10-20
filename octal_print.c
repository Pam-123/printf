#include "main.h"

/**
 * octal_print - function that converts integer to octal numbers
 * @final_args: the argument in the va_list
 * Return: o the length of the octal number
 */

int octal_print(va_list final_args)
{
	int o, l, m;
	unsigned int unit, area;
	char *len;

	unit = va_arg(final_args, unsigned int);

	if (unit == 0)
	{
		op_putchar('0');
		return (1);
	}

	area = unit;
	for (o = 0; area > 0; o++)
	{
		area = area / 8;
	}
	len = malloc((sizeof(char) * o) + 1);
	if (len == NULL)
		return (-1);
	for (l = 0; unit > 0; l++)
	{
		len[l] = (unit % 8) + '0'; /* Convert to char representation */
		unit = unit / 8;
	}
	for (m = (l - 1); m >= 0; m--)
	{
		op_putchar(len[m]);
	}
	free(len);
	return (o);
}

