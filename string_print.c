#include "main.h"

/**
 * string_print - a function that print the string
 * @final_args: argument
 * Return: the length of the string
 */

int string_print(va_list final_args)
{
	int w;
	char *stri;

	stri = va_arg(final_args, char *);
	if (stri == NULL)
		stri = "(null)";
	for (w = 0; stri[w] != '\0'; w++)
	{
		op_putchar(stri[w]);
	}
	return (w);
}
