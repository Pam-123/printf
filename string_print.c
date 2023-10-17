#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * string_print - Print a string using %s specifier
 * @args: List containing the string to print
 * Return: Number of characters printed (excluding null byte)
 */
int string_print(va_list args)
{
	char *str = va_arg(args, char*);

	if (str == NULL)
	{
		return (printf("(null)"));
	}
	return (printf("%s", str));
}
