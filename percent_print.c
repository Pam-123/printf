#include "main.h"
#include <stdarg.h>

/**
 * percent_print - Prints a percent character
 * @args: Argument list (unused)
 * Return: Number of characters printed (always 1 for '%')
 */
int percent_print(va_list args)
{
	(void) args;
	return (op_putchar('%'));
}
