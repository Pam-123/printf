#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * percent_print - Print a percent sign using %% specifier
 * @args: List (unused)
 * Return: Number of characters printed (always 1)
 */
int percent_print(va_list args)
{
	(void) args;

	return (op_putchar('%'));
}
