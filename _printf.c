#include "main.h"

/**
 * _printf - Custom printf function
 * @format: Format string containing %, %c, and %s
 * @...: Variable number of arguments
 *
 * Return: Number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
	va_list final_args;
	int compute = 0;
	char *op_str;

	va_start(final_args, format);
	while (*format)
	{
		if (*format == '%')
		{
			++format;
			if (*format == 'c')
				compute += op_putchar(va_arg(final_args, int));
			else if (*format == 's')
				for (op_str = va_arg(final_args, char *); *op_str; ++op_str)
					compute += op_putchar(*op_str);
			else if (*format == '%')
				compute += op_putchar('%');
		}
		else
		{
			compute += op_putchar(*format);
		}
		++format;
	}
	va_end(final_args);
	return (compute);
}
