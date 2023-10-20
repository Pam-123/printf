#include "main.h"

/**
 * hexadec_print - function that converts to hexadecimal
 * @final_args: the argment in the va_list
 * Return: the length of the hexadecimal number
 */

int hexadec_print(va_list final_args)
{
	int b, n, m;
	unsigned int number, size;
	char *len;

	number = va_arg(final_args, unsigned int);

	if (number == 0)
	{
		op_putchar('0');
		return (1);
	}

	size = number;
	for (b = 0; size > 0; b++)
	{
		size = size / 16;
	}
	len = malloc((sizeof(char) * b) + 1);
	if (len == NULL)
		return (-1);
	for (n = 0; number > 0; n++)
	{
		if ((number % 16) < 10)
			len[n] = (number % 16) + 48;
		else
			len[n] = (number % 16) + 55;
		number = number / 16;
	}
	for (m = (n - 1); m >= 0; m--)
	{
		op_putchar(len[m]);
	}
	free(len);
	return (b);
}


/**
 * HEXADEC_print - function that converts to hexadecimal
 * @final_args: the argment in the va_list
 * Return: the length of the hexadecimal number
 */

int HEXADEC_print(va_list final_args)
{
	int b, n, m;
	unsigned int number, size;
	char *len;

	number = va_arg(final_args, unsigned int);

	if (number == 0)
	{
		op_putchar('0');
		return (1);
	}

	size = number;
	for (b = 0; size > 0; b++)
	{
		size = size / 16;
	}
	len = malloc((sizeof(char) * b) + 1);
	if (len == NULL)
		return (-1);
	for (n = 0; number > 0; n++)
	{
		if ((number % 16) < 10)
			len[n] = (number % 16) + 48;
		else
			len[n] = (number % 16) + 87;
		number = number / 16;
	}
	for (m = (n - 1); m >= 0; m--)
	{
		op_putchar(len[m]);
	}
	free(len);
	return (b);
}
