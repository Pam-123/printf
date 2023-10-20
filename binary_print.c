#include <stdarg.h>
#include "main.h"
#include <stdio.h>

/**
 * _printf - Custom printf function to handle %b specifier
 * @format: Format string containing specifiers
 * @final_args: Variable argument list
 *
 * Return: Number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
	va_list final_args;
	int compute = 0;
	const char *su_ptr;

	va_start(final_args, format);

	for (su_ptr = format; *su_ptr != '\0'; su_ptr++)
	{
		if (*su_ptr == '%' && *(su_ptr + 1) == 'b')
		{
			unsigned int integer = va_arg(final_args, unsigned int);

			compute += binary_print(final_args, integer);
			su_ptr++; /* Skip 'b' */
		}
		else
		{
			putchar(*su_ptr); /* Changed putchar to op_putchar */
			compute++;
		}
	}

	va_end(final_args);
	return (compute);
}

/**
 * binary_print - Prints Binary
 * @final_args: Variable argument list
 * @integer: The unsigned int to print in binary
 *
 * Return: Number of characters printed
 */
int binary_print(va_list final_args, unsigned int integer)
{
	int compute = 0;

	if (integer > 1)
	{
		compute += binary_print(final_args, integer / 2); /* Recursively print binary digits in correct order */
	}
	putchar((char)(integer % 2 + '0')); /* Changed putchar to op_putchar */
	compute++;

	return (compute);
}
