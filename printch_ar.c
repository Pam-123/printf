#include "main.h"

/**
 * printch_ar - function to be used to print chars using pointers
 * @_my__args: argument
 *
 * Return: Return 1
 */
int printch_ar(va_list _my__args)
{
	char stringg;
	stringg = va_arg(_my__args, int);
	own_putchar(stringg);
	return (1);
}
