#include "main.h"

/**
 * char_print - Pirnts a Char(Character)
 * @your_op_args: argument
 * Return: 1
 */
int char_print(va_list your_op_args)
{
	char op_strings;

	op_strings = va_arg(your_op_args, int);
	own_putchar(op_strings);
	return (1);
}
