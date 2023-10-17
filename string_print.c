#include "main.h"

/**
 * string_print - Prints a string
 * @your_op_args: argument
 * Return: Length of the string
 */
int string_print(va_list your_op_args)
{
	char *op_strings = va_arg(your_op_args, char *);
	int my_s = 0;
	int span;

	if (op_strings == NULL)
	{
		op_strings = "(null)";
	}

	span = _strlen(op_strings);

	for (my_s = 0; my_s < span; my_s++)
	{
		own_putchar(op_strings[my_s]);
	}

	return (span);
}

