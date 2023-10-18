#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - Custom printf function
 * @format: Format string
 * @...: Variable number of arguments
 *
 * Return: Number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
	int compute, my_strlen = 0;
	char *str, c;
	va_list final_args;

	if (format == NULL)
		return (-1);
	va_start(final_args, format);

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			compute++;
		}
		else
		{
			format++;
			if (*format == 'c')
			{
				c = va_arg(final_args, int);
				write(1, &c, 1);
				compute++;
			}
			else if (*format == 's')
			{
				str = va_arg(final_args, char *);
				my_strlen = 0;

				while (str[my_strlen] != '\0')
					my_strlen++;

				write(1, str, my_strlen);
				compute += my_strlen;
			}
		}
		format++;
	}
	va_end(final_args);
	return (compute);
}
