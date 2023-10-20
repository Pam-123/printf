#include "main.h"

/**
 * format_str - receives a format string and a list of conversion functions
 * and arguments, and prints the formatted string
 *
 * @format: null-terminated string containing the characters to be printed
 * @func_list: array of conv structs that map format specifiers
 * to conversion functions
 * @list: va_list of arguments to be printed
 * Return: total number of characters printed
 */

int format_str(const char *format, arguments func_list[], va_list list)
{
	int _i, _j, r, r_chars;

	r_chars = 0;
	for (_i = 0; format[_i] != '\0'; _i += 1)
	{
		if (format[_i] == '%')
		{
			for (_j = 0; func_list[_j].my != NULL; _j += 1)
			{
				if (format[_i + 1] == func_list[_j].my[0])
				{
					r = func_list[_j].b(list);
					if (r == -1)
						return (-1);
					r_chars += r;
					break;
				}
			}
			if (func_list[_j].my == NULL && format[_i + 1] != ' ')
			{
				if (format[_i + 1] != '\0')
				{
					op_putchar(format[_i]);
					op_putchar(format[_i + 1]);
					r_chars += 2;
				}
				else
					return (-1);
			}
			_i += 1;
		}
		else
		{
			op_putchar(format[_i]);
			r_chars += 1;
		}
	}
	return (r_chars);
}


/**
 * _printf - prints formatted output to the standard output stream
 * @format: a string of characters and format specifiers
 *
 * Return: the number of characters printed (excluding the null byte)
 */

int _printf(const char *format, ...)
{
	int n;

	arguments func_list[] = {
		{"c", char_print},
		{"s", string_print},
		{"%", percent_print},
		{"d", decimal_print},
		{"i", decimal_print},
		{"r", rev_print},
		{"b", binary_print},
		{"R", rot13_print},
		{NULL, NULL}
	};
	va_list list;

	if (format == NULL)
	{
		return (-1);
	}

	va_start(list, format);
	n = format_str(format, func_list, list);
	va_end(list);
	return (n);
}
