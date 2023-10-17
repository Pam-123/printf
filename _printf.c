#include <stdarg.h>
#include "main.h"
#include <unistd.h>

/**
 * _printf - Custom printf function
 * @format: Format string containing %, %c, and %s
 * @...: Variable number of arguments
 *
 * Return: Number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
	va_list _args;
	int compute = 0;
	char *str;

	va_start(_args, format);
	while (*format)
	{
		if (*format == '%')
		{
			++format;
			if (*format == 'c')
				compute += own_putchar(va_arg(_args, int));
			else if (*format == 's')
				for (str = va_arg(_args, char *); *str; ++str)
					compute += own_putchar(*str);
			else if (*format == '%')
				compute += own_putchar('%');
		}
		else
		{
			compute += own_putchar(*format);
		}
		++format;
	}
	va_end(_args);
	return (compute);
}

