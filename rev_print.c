#include "main.h"


/**
 * rev_string - Reverses a string
 * @pfList: the argument in the va_list
 * Return: the length of the string
 */

int rev_print(va_list final_args)
{

	int span = 0, b = 0;
	char *s;

	s = va_arg(final_args, char *);
	if (s == NULL)
	{
		s = ")llun(";
	}
	while (s[span] != '\0')
	{
		span++;
	}
	span--;
	for (; span >= 0; span--)
	{
		op_putchar(s[span]);
		b++;
	}
	return (b);
}
