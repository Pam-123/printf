#include "main.h"

/**
 * rot13_print - function that encodes a string using rot13.
 * @final_args: the input string
 * Return: the encoded string
 */

int rot13_print(va_list final_args)
{
	char icons[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char update[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int b = 0;
	int n;
	char *s;

	s = va_arg(final_args, char *);
	if (s == NULL)
	{
		s = "(null)";
	}
	while (s[b] != '\0')
	{
		for (n = 0; n < 52; n++)
		{
			if (s[b] == icons[n])
			{
				op_putchar(update[n]);
				b++;
				break;
			}
		}
		if (!icons[n])
		{
			op_putchar(s[b]);
			b++;
		}
	}
	return (b);
}
