#include "main.h"
#include <stdarg.h>

/**
 * string_print - Prints a string
 * @args: Argument list containing the string to print
 * Return: Number of characters printed
 */
int string_print(va_list args)
{
	char *str = va_arg(args, char *);
	int compute = 0;

	if (str == NULL)
		str = "(null)";

	while (*str)
	{
		compute += op_putchar(*str);
		str++;
	}
	return (compute);
}
