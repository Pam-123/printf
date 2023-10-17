#include "main.h"
#include <stdarg.h>

/**
 * hex_print - Prints a hexadecimal number
 * @args: Argument list containing the hexadecimal number to print
 * Return: Number of digits printed
 */
int hex_print(va_list args)
{
	int compute = 0;
	unsigned int hex = va_arg(args, unsigned int);
	(void) hex;

	return (compute);
}
