#include "main.h"

/**
 * string_print - prints a string
 * @args: argument
 *
 * Return: Length
 */
int string_print(va_list args)
{
	char *string;
	int s;
	int span;

	string = va_arg(args, char *);
	if (string == NULL)
	{
		string = "(null)";
		span = _strlen(string);
		for (s = 0; s < span; s++)
		{
			op_putchar(string[s]);
		}
		return (span);
	}
	else
	{
		span = _strlen(string);
		for (s = 0; s < span; s++)
		{
			op_putchar(string[s]);
		}
		return (span);
	}
}
