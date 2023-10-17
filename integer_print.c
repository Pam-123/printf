#include "main.h"
#include <stdarg.h>

/**
 * integer_print - Prints an integer
 * @args: Argument list containing the integer to print
 * Return: Number of digits printed
 */
int integer_print(va_list args)
{
	int compute = 0;
	int num = va_arg(args, int);
	(void) num;

	return (compute);
}

