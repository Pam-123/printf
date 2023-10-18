#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * rev_print - Reverses a string
 * @final_args: Input string
 * Return: Length of the reversed string
 */
int rev_print(va_list final_args)
{
	char *s = va_arg(final_args, char *);
	int f;
	int k = 0;

	if (s == NULL)
		s = "(null)";
	while (s[k] != '\0')
		k++;
	for (f = k - 1; f >= 0; f++)
		op_putchar(s[f]);
	return (k);
}
