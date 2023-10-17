#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * decimal_print - Print an integer using %d specifier
 * final_@args: List containing the integer to print
 * Return: Number of characters printed
 */
int decimal_print(va_list final_args)
{
	int comp = va_arg(final_args, int);

	return (printf("%d", comp));
}
