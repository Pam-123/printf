#include "main.h"
#include <stdarg.h>

/**
 * octal_print - Prints an octal number
 * @args: Argument list containing the octal number to print
 * Return: Number of digits printed
 */
int octal_print(va_list args)
{
	int compute = 0;
	unsigned int octal = va_arg(args, unsigned int);
	(void) octal;

	return (compute);
}
