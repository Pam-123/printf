#include "main.h"
#include <stdarg.h>

/**
 * char_print - Prints a character
 * @args: Argument list containing the character to print
 * Return: Number of characters printed
 */
int char_print(va_list args)
{
	char b = va_arg(args, int);

	return (op_putchar(b));
}
