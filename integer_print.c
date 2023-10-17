#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * integer_print - Print an integer using %i specifier
 * @final_args: List containing the integer to print
 * Return: Number of characters printed
 */
int integer_print(va_list final_args)
{
	int comp = va_arg(final_args, int);

	return (printf("%d", comp));
}
