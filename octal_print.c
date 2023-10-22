#include "main.h"
#include <stdlib.h>

/**
 * octal_print - prints an octal number
 * @final_args: list of arguments
 * Return: The length of the octal number
 */
int octal_print(va_list final_args)
{
	int a, s;
	int temp;
	int octal_unit, length;
	char *octal_length;

	octal_unit = va_arg(final_args, int);

	if (octal_unit == 0)
	{
		op_putchar('0');
		return (1);
	}
	length = 0;
	temp =  octal_unit;

	while (temp > 0)
	{
		temp = temp / 8;
		length++;
	}
	octal_length = malloc(length + 1);
	if (octal_length == NULL)
		return (-1);

	for (a =  0; length > 0; a++)
	{
		octal_length[a] = '0' + (octal_unit % 8);
		octal_unit = octal_unit / 8;
		length--;
	}
	for (s = a - 1; s >= 0; s--)
	{
		op_putchar(octal_length[s]);
	}
	free(octal_length);
	return (a);
}
