#include "main.h"
#include <stdarg.h>

/**
 * converter - a function that checks for the format specifier
 * @spec: the input format specifier
 * Return: the execute function
 */
int (*converter(char spec))(va_list args)
{
	print_format_t formats[] = {
		{'c', char_print},
		{'s', string_print},
		{'%', percent_print},
		{'\0', NULL}
	};

	int as = 0;

	while (formats[as].spec != '\0')
	{
		if (formats[as].spec == spec)
			return (formats[as].printer);
		as++;
	}

	return (NULL);
}
