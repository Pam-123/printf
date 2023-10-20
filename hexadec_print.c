#include "main.h"

/**
 * hexadec_print - function that converts integer to hexadecimal
 * @final_args: the argument in the va_list
 * Return: the length of the hexadecimal number
 */

int hexadec_print(va_list final_args)
{
	int w, s, x;
	unsigned int unit, size;
	char *len;

	unit = va_arg(final_args, unsigned int);

	if (unit == 0)
	{
		op_putchar('0');
		return (1);
	}

	size = unit;
	for (w = 0; size > 0; w++)
	{
		size = size / 16;
	}
	len = malloc((sizeof(char) * w) + 1);
	if (len == NULL)
		return (-1);
	for (s = 0; unit > 0; s++)
	{
		if ((unit % 16) < 10)
			len[s] = (unit % 16) + 48;
		else
			len[s] = (unit % 16) + 55;
		unit = unit / 16;
	}
	for (x = (s - 1); x >= 0; x--)
	{
		op_putchar(len[x]);
	}
	free(len);
	return (w);
}

/**
 * HEXADEC_print - function that converts integer to hexadecimal
 * @final_args: the argument in the va_list
 * Return: the length of the hexadecimal number
 */

int HEXADEC_print(va_list final_args)
{
	int w, s, x;
	unsigned int unit, size;
	char *len;

	unit = va_arg(final_args, unsigned int);

	if (unit == 0)
	{
		op_putchar('0');
		return (1);
	}

	size = unit;
	for (w = 0; size > 0; w++)
	{
		size = size / 16;
	}
	len = malloc((sizeof(char) * w) + 1);
	if (len == NULL)
		return (-1);
	for (s = 0; unit > 0; s++)
	{
		if ((unit % 16) < 10)
			len[s] = (unit % 16) + 48;
		else
			len[s] = (unit % 16) + 87;
		unit = unit / 16;
	}
	for (x = (s - 1); x >= 0; x--)
	{
		op_putchar(len[x]);
	}
	free(len);
	return (w);
}

