#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * _printf - Custom printf function to handle %c, %s, and %%
 * @format: Format string
 * @...: Variable number of arguments
 *
 * Return: Number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
	va_list _my__args;
	int compute = 0;

	va_start(_my__args, format);
	while (format && *format)
	{
		if (*format == '%' && *(format + 1) != '\0')
		{
			format++;
			switch (*format)
			{
				case 'c':
					{
						int value = va_arg(_my__args, int);
						compute += write(1, &value, sizeof(int));
						break;
					}

				case 's':
					{
						char *compute_string = va_arg(_my__args, char *);

						if (compute_string)
							compute += write(1, compute_string, _strlen(compute_string));
						else
							compute += write(1, "(null)", 6);
					}
					break;
				case '%':
					compute += write(1, "%", 1);
					break;
				default:
					compute += write(1, "%", 1);
					compute += write(1, format, 1);
			}
		}
		else
			compute += write(1, format, 1);
		format++;
	}
	va_end(_my__args);
	return (compute);
}
