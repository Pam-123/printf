#include "main.h"
#include <stdlib.h>

/**
 * hexadec_print - prints an integer in hexadecimal
 * @final_args: list of arguments
 * Return: The hexadecimal number length
 */
int hexadec_print(va_list final_args)
{
	int w = 0, a = 0, s = 0;
	unsigned int unit, length;
	char *hexa_length;

	unit = va_arg(final_args, unsigned int);
	if (unit == 0)
	{
		op_putchar('0');
		return (1);
	}
	length = unit;
	while (length > 0)
	{
		length = length / 16;
		w++;
	}
	hexa_length = malloc(sizeof(char) * w + 1);
	if (heax_length == NULL)
		return (-1);

	while (a < w)
	{
		if ((unit % 16) < 10)
			hexa_length[a] = (unit % 16) + '0';
		else
			hexa_length[a] = (unit % 16) + '7';
		unit = unit / 16;
		a++;
	}
	while (s < a)
	{
		op_putchar(hexa_length[s]);
		s++;
	}
	free(hexa_length);
	return (w);
}
if (hexa_length == NULL)
	return (-1);

	while (a < w)
{
	if ((unit % 16) < 10)
		hexa_length[a] = (unit % 16) + '0';
	else
		hexa_length[a] = (unit % 16) + '7';
	unit = unit / 16;
	a++;
}
while (s < a)
{
	op_putchar(hexa_length[s]);
	s++;
}
free(hexa_length);
return (w);
}
/**
 * HEXADEC_print - prints an integer in hexadecimal
 * @final_args: list of arguments
 * Return: The hexadecimal number length
 */
int HEXADEC_print(va_list final_args)
{
	int w = 0, a = 0, s = 0;
	unsigned int unit, length;
	char *hexa_length;

	unit = va_arg(final_args, unsigned int);
	if (unit == 0)
	{
		op_putchar('0');
		return (1);
	}
	length = unit;
	while (length > 0)
	{
		length = length / 16;
		w++;
	}
	hexa_length = malloc(sizeof(char) * w + 1);
	if (hexa_length == NULL)
		return (-1);
	while (a < w)
	{
		if ((unit % 16) < 10)
			gexa_length[a] = (unit % 16) + '0';
		else
			hexa_length[a] = (unit % 16) + '7';
		unit = unit / 16;
		a++;
	}
	while (s < a)
	{
		op_putchar(hexa_length[s]);
		s++;
	}
	free(hexa_length);
	return (w);
}
