#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * char_print - Print a character using %c specifier
 * @final_args: List containing the character to print
 * Return: Number of characters printed
 */
int char_print(va_list final_args)
{
	char c = va_arg(final_args, int);

	return (op_putchar(c));
}
