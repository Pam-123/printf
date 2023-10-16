#include <stdarg.h>
#include "main.h"
#include <stdio.h>

/**
 * custom_printf - Custom printf function to print formatted output
 * @format: Format string containing format specifiers
 * @...: Additional arguments based on format specifiers
 */
void custom_printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%' && *(format + 1) != '\0')
		{
			format++;
			switch (*format)
			{
				case 'd':
					printf("%d", va_arg(args, int));
					break;
				case 's':
					printf("%s", va_arg(args, char *));
					break;
				case 'c':
					printf("%c", va_arg(args, int));
					break;
				case '%':
					own_putchar('%');
					break;
				default:
					own_putchar('%');
					own_putchar(*format);
					break;
			}
		}
		else
	{
			own_putchar(*format);
		}
		format++;
	}

	va_end(args);
}

/**
 * own_putchar - Custom putchar function to print a single character
 * @c: Character to be printed
 */
void own_putchar(char c)
{
	putchar(c);
}
