#include "main.h"
#include <stdarg.h>

/**
 * _printf - Custom printf function
 * @format: Format string containing format specifiers
 * @...: Additional arguments to be formatted and printed
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int compute = 0;
	int (*printer)(va_list);

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			printer = converter(*format);
			if (printer)
				compute += printer(args);
		}
		else
		{
			op_putchar(*format);
			compute++;
		}
		format++;
	}

	va_end(args);
	return (compute);
}
