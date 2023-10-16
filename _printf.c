#include <stdarg.h>
#include "main.h"

/**
 * _strlen - Computes the length of a string
 * @s: The input string
 * Return: Length of the string
 */
int _strlen(const char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * _printf - Custom printf function
 * @format: The format string
 * @...: Additional arguments
 * Return: Number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
	va_list _my_args;
	int compute = 0;

	if (format == NULL)
	{
		return (-1);
	}

	va_start(_my_args, format);

	while (format && *format)
	{
		if (*format == '%' && *(format + 1))
		{
			format++;
			switch (*format)
			{
				case 'c':
					compute += printch_ar(va_arg(_my_args, int));
					break;
				case 's':
					compute += printstr_ingg(va_arg(_my_args, char *));
					break;
				case '%':
					compute += printch_ar('%');
					break;
				default:
					compute += printch_ar('%');
					compute += printch_ar(*format);
					break;

			}
		}
		else
		{
			compute += printch_ar(*format);
		}
		format++;
	}

	va_end(_my_args);
	return (compute);
}
