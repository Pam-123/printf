#include "main.h"

/**
 * char_print - prints char
 * @args: arguments
 * Return: 1
 */
int char_print(va_list args)
{
	char character;

	character = va_arg(args, int);
	op_putchar(character);
	return (1);
}

