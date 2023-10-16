#include "main.h"

/**
 * printstr_ingg - prints the string
 * @_my__args: argument
 *
 * Return: Length
 */
int printstr_ingg(va_list _my__args)
{
	char *str;
	int b;
	int length;

	str = va_arg(_my__args, char *);
	if (str == NULL)
	{
		str = "(null)";
		length = _strlen(str);
		for(b = 0; b < length; b++)
			own_putchar(str[b]);
		return (length);
	}
	else
	{
		length =_strlen(str);
		for (b = 0; b < length; b++)
			own_putchar(str[b]);
		return (length);
	}
}
